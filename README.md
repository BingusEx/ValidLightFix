# Valid Light Fix

Reimplements 3 removed hooks from community shaders as a standalone plugin.
Without these hooks draw call or mesh heavy scenes tank in performace for some unknown reason.

I've tested the vanilla game with and without community shaders installed. With this plugin enabled, Performance is as expected.
Without this plugin and regardless whether CS is enabled or not performance tanks, by ~90% in heavy scenes.
Why thunking the valid light checks with more conditions helps im not entirely sure. My assumption is that the vanilla code is too generous in what it checks for resulting in unececairy cpu time being wasted.
Force returning false for all 3 checks also fixes performance with the only noticeable side-effect being that the lighting for inventory items no longer works.
