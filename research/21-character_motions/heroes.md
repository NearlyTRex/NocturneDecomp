# Hero motions

Every state each of the nine playable classes has, the motions behind it, where it
can be entered from, and what its signals do. Read [format.md](format.md) first for
what routes, signals and keepState mean.

Regenerate any table with
`scripts/Python/dump_skl_motions.py --compact <FILE>.SKL`; every hero skeleton is in
`hero.pod` (`scripts/Python/extract_pod.py hero.pod .skl <dir>`).

## Roster

From `CHeroPlaceholder_createHero_FUN_004f3d80.keep`. Moloch swaps skeletons with his
form (`CMoloch_setup`); Svetlana's two models share one skeleton.

| EHeroType | Class | Skeleton | States / motions | Signal handler |
|---|---|---|---|---|
| 0 | CGabriella | GABRIELA.SKL | 23 / 27 | `CGabriella_processMotionEvents_FUN_004d4890` |
| 1 | CSvetlana | SVETLANA.SKL | 41 / 47 | `CSvetlana_advanceMotion_FUN_005d9970` |
| 2 | CStranger | STRANGER.SKL | 53 / 81 | `CStranger_processMotionEvents_FUN_005bdd20` |
| 3 | CScat | SCAT.SKL | 17 / 42 | `CScat_advanceMotionWithGrabDamage_FUN_00557d20` |
| 4 | CBaron | BARON.SKL | 9 / 20 | `CBaron_advanceMotion_FUN_00413a00` |
| 5 | CIcePick | ICEPICK.SKL | 26 / 25 | `CIcePick_processMotionEvents_FUN_004f93a0` |
| 6 | CHaystack | HAYSTACK.SKL | 21 / 24 | `CHaystack_advanceMotion_FUN_004f1970` |
| 7 | CColonel | COLONEL.SKL | 13 / 13 | `CColonel_processMotionEvents_FUN_00440430` |
| 8 | CMoloch | MOLOCH_D.SKL (demon) / MOLOCH_H.SKL (human) | 16 / 22, 9 / 11 | inline in `CMoloch_process_FUN_00528d20` |

## What each hero can do

What the skeleton authors. Whether the class's code ever asks for it is a separate
question, answered per hero below where it matters.

| | Walk/run/back | Strafe | Jump | Fall | Ladder | Pickup | Rummage | Door | Lever | Push | Melee | Escape grab | Sit / talk |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| Gabriella | yes | yes | – | – | yes | yes | yes | yes | – | yes | – | yes | – |
| Stranger | yes | yes | run, stand | yes | up, down | 4 kinds | yes | 3 kinds | yes | yes | spear (layered) | yes | yes |
| Svetlana | yes | – | long, castle | – | – | – | – | – | – | – | 2 blades | yes | yes |
| Scat | yes | – | – | – | – | – | – | – | – | – | yes | yes | 22 talks |
| Baron | yes | – | – | – | – | – | – | – | – | – | yes | – | – |
| IcePick | yes | – | – | – | – | gun, waist | – | – | – | – | 3 attacks | yes | – |
| Haystack | yes | – | – | – | – | – | – | – | – | – | 3 attacks, spar | yes | – |
| Colonel | yes | – | – | – | – | – | – | – | – | – | – | yes | – |
| Moloch | walk, back | – | – | – | – | – | – | – | – | – | 3 attacks (demon) | – | yes (human) |

Only the Stranger and Gabriella have interaction motions. The other classes open
doors and pull levers through `nocturne_hero_interact` with no animation
(`shims/game/hero_interact.h`).

**Grabs.** `CHero_getGrabbed_FUN_004f28d0` asks for GETGRABBED by name, once, and
`CHero_canBeGrabbed_FUN_004f2890` refuses a skeleton without it, so Baron and Moloch
cannot be grabbed. Neither can Svetlana, though her skeleton has GETGRABBED and
PUSHOFF: `CSvetlana_getGrabbed_FUN_005d9ec0` overrides the slot with `return 0`. Most skeletons route to GETGRABBED only from STAND or a fighting
stance (the Colonel's only from STAND), so a hero grabbed mid-run keeps running. The
way out is ESCAPEGRAB in GABRIELA.SKL and STRANGER.SKL and PUSHOFF in the others, in
every case routed only from GETGRABBED. Only the Stranger's code times an escape;
`NOCTURNE_AUTHENTIC_HERO_ACTIONS` gives the other classes the same sequence by state
name (`shims/game/hero_grab.h`).

## Signal values

| Value | Meaning |
|---|---|
| 1, 7 | Footstep left, right. Gabriella and the Stranger handle these themselves, ladder-aware; Baron ignores them |
| 0x1f, 0x25 | Running footstep left, right (default handler) |
| 2 | Take the object in hand (`executeObjectPickup`) |
| 3 | Put the carried object down |
| 6 | Escape-grab kick: 10–15 damage to the grabber |
| 0xf | Hit sound while grabbed |
| 0x11, 0x12 | Fall sound; 0x12 is an explicit no-op |
| 0x13 | Gabriella: `collectAmmo`. Stranger: `processPickupComplete` |
| 0x14 | Gabriella: `executeObjectPickup` |
| 0x15 | `addCarriedItemToInventory` |
| 0x16 | `tryOpenDoor` |
| 0x17 | Stranger: `executeLeverPull` |
| 100–108 | Melee hits and swing/punch sounds, per class. IcePick: 103 is a 1-in-4 CRACK, 104 picks the gun up, 105 throws it |
| 110 | Baron: unsummon |
| 666, 667 | Stranger: jump impulse, vertical velocity 10 (run) or 8 (stand) |

The Stranger handles 0x15, 0xf and 0x18, and none of his motions emit them.
Same-frame losses in shipped data: Svetlana's PushOff (100 and 101 at f20, 100 lost),
IcePick's attack3 (101 and 102 at f18, 101 lost).

## Notes by hero

### Gabriella

- **Interaction routes only from STAND.** PICKUP_CARRY, RUMMAGE, PICKUP_INVENTORY,
  OPEN_DOOR, PUSH and LADDER are entered from "gab pause" alone; asked for while
  moving, they are dropped. `findAndPickupNearbyObject` snaps her onto the object
  before asking, so the shipped `use_item` pickup, which also fires while walking,
  moves her and does nothing else.
- **Strafes route only from STAND and WALK**, and not into each other.
- **Her strafes are slow and in place.** "gab strafe l/r" loop in 3 s (90 frames at
  30 fps) with no root motion; `CGabriella::process` moves her a flat 2 units/s from
  their blend weights. The Stranger's loop in 0.47 s (21 at 45 fps) and move him by
  root motion at about 1.8 units/s, so the two travel alike while her legs step at a
  sixth of his rate.
- **TURN_LEFT and TURN_RIGHT are never asked for.** `CGabriella::process` treats
  them as locomotion and applies none of their root motion, but turning on the
  spot only rotates "gab pause".
- **Her ladder is up only, and slow.** "gab ladder" (216 frames at 45 fps) is a
  130-frame mount climbing 1.5 units, then a loop from frame 130 climbing 2 units
  in 1.9 s; the Stranger's "ladderuploop" climbs 2 units in 1.1 s. There is no
  down motion and no descend code. `CGabriella::tryClimbLadder` places her and
  sets `ladder_to_climb` before asking for LADDER, which only STAND routes to;
  pressed while moving, the request is dropped and `process`, which reads no
  input and applies root motion without collision while `ladder_to_climb` is
  set, carries her on through the world. The Stranger's `processFrame` drops his
  ladder when its state has no weight.
- **KICK_DOOR is unused in the shipped game**: no signal, and nothing in the code
  or the shipped scripts asks for state 0x13. It is a left-leg kick: the thigh
  peaks at frame 19 and the knee straightens at 22–24, before the exit at 29.
- **No aim state.** "gab draw", "gab shoot" and "gab crossbow shoot" sit in WALK but
  are layered, posed by `CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80`; aim
  pitch is procedural.
- `NOCTURNE_AUTHENTIC_HERO_ACTIONS` puts her pickup on the action button (STAND
  only) and selects her strafes, asking for STAND first when no route exists and
  playing them at twice their authored rate, asks for her turns from turn input
  alone, turns KICK_DOOR into an unarmed kick with a frame-based hit from her
  left foot, and gives her ladder the Stranger's acceptance test, a STAND-only
  start, his let-go, and 1.75 times its authored rate
  (`shims/game/hero_gabriella.h`).

### Stranger

The only hero with a jump and a fall. `CStranger::processFrame` drives it:

1. The jump input asks for RUNJUMPSTART from RUN, STANDJUMPSTART from STAND, WALK,
   BACKUP and the strafes, and clears `is_on_ground`.
2. Start exits into MIDDLE, whose signal (666 run, 667 stand) sets the upward
   velocity. MIDDLE exits into LAND, a one-frame hold.
3. Leaving the ground any other way — airborne past 0.5 s, or falling faster than
   20 — asks for FALLING.
4. On touching ground from FALLING, RUNJUMPLAND or STANDJUMPLAND: below 20 units/s
   it asks for FALLEND, RUNJUMPEND or STANDJUMPEND; above, it deals
   `(speed - 20) * 5` damage and asks for FALLEND_HURT, or FALLEND_SPLAT when the
   fall is fatal.
5. FALLEND_HURT and FALLEND_SPLAT have no motions of their own: they are aliases
   landing in "fallendHurt" (HURT) and "fallendSplat" (DIE).

STAND holds the 17 layered `draw_*` motions (holsters, coat pocket, shotgun, tommy,
flamethrower, toss, spear, crate, gas mask) as well as "stand". AXEPICKUPWALL and
AXESWING are states with no motions and no routes. SITGES1–3 have motions but no
route in, and nothing in the shipped game plays them.

### Svetlana

LONGJUMP and CASTLEJUMP are scripted jumps: the mission scripts ask for them with
`setModelState`, and her own code never does, so there is no player jump. EXAMINE
(kneel), BOW, HEADACHE and the sitting conversations are asked for the same way.
SITLOOP is reached only because HQ-ACT1.MSN places her in "sitloop"; the script's
`setModelState(Svetlana, SITLOOP)` there would otherwise be dropped, since STAND has
no route to it. DRAW, THROW, BIGTHROW and STANDTOSIT have motions and no route in,
and nothing in the shipped game plays them.

### Scat

FSTANCE, SLUMPWALK, SLUMPBACKUP and ATTACK are his armed stance; DAMAGETRANCE and
SUIT are story states. Walk and run carry no footstep signals at all. The 22 "talk"
motions and the two layered draw motions all sit in STAND.

### Baron

STAND, WALK, BACKUP and RUN, an attack, two rises and GOAWAY (signal 110 unsummons
him). TEST holds twelve motions with no route in, script captures by their names. The
state is never entered: the ACT2 scripts play eight of the motions as gestures
(bscrp001–004, 006–008, 010). "BScrp005", "BScrp009", "dead" and "riseup" are never
played.

### IcePick

PICKUPGUN and THROWGUN are the only interaction motions, routed from locomotion.
SHOOT has a motion and no route; DRAW has neither. The SHOOT state is never entered,
but `CIcePick_updateShootBlend_FUN_004f8810` layers frame 0 of "shoot" from Spine1 up
as an aiming pose, easing it in while he holds a gun he picked up (`is_armed`) with it
drawn. PICKUPWAIST, BENDBARS and DOUBLESPRAY route from STAND; "pickupwaist" emits no
signal, so it picks nothing up. He fights from his hand bones and never reads the
inventory; `NOCTURNE_AUTHENTIC_HERO_WEAPON` gives a player IcePick an empty weapon slot.

### Haystack

Three attacks from FSTANCE, five sparring motions in SPAR with signals 101–108, and
MEDITATE. DRAW has no motion.

### Colonel

No signals anywhere, not even footsteps. DRAW and SHOOT have motions and no route
in, and nothing in the shipped game plays them: `CColonel_process_FUN_0043fa00` only
toggles `guns_drawn` on draw and swallows fire once it is set. Its grab struggle asks
for state 9, which is DRAW, not PUSHOFF (0x0b), so it never plays either.
`NOCTURNE_AUTHENTIC_HERO_ACTIONS` layers "draw" and "shoot" from Spine2 up and fires
the pistol `NOCTURNE_AUTHENTIC_HERO_WEAPON` gives him (`shims/game/hero_colonel.h`).
Entering either state would stop him: neither has root motion, and his process reads
walk input only in STAND, WALK, RUN and BACKUP.

### Moloch

Demon form has no run. Its three attacks (MELEEFIGHT, OVERHEADSMASH, PUNCH) emit no
hit signal; the project's `nocturne_moloch_attack_hit` strikes by frame instead
(`shims/game/hero_moloch.h`). Human form is locomotion, sitting and scripted states.

## State tables

"Entered from" lists the states whose motions have a route or exit landing in this
state; more than ten are counted. **nothing** means only a direct motion jump from
code or script can enter it. A state with no motions shows "—".

#### GABRIELA.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "gab pause" | 18 states |  |
| `0x01` WALK | "gab walk", "gab draw", "gab shoot", "gab crossbow shoot" | STAND, RUN, BACKUP, TURN_LEFT, TURN_RIGHT | 1 7 |
| `0x02` RUN | "gab run" | STAND, WALK, BACKUP, TURN_LEFT, TURN_RIGHT, STRAFE_L, STRAFE_R | 1 7 |
| `0x03` BACKUP | "gab back walk" | STAND, WALK, RUN, TURN_LEFT, TURN_RIGHT, STRAFE_L, STRAFE_R | 1 7 |
| `0x04` PICKUP_CARRY | "gab pickup" | STAND | 2 |
| `0x05` PUTDOWN | "gab putdown" | STAND | 3 |
| `0x06` GETGRABBED | "gab hug begin", "gab hug loop" | 11 states | 7 15 |
| `0x07` ESCAPEGRAB | "gab hug end" | GETGRABBED | 6 7 |
| `0x08` HURT | "gab hurt1" | STAND, WALK, RUN, BACKUP, PUTDOWN, PUSH, TURN_LEFT, TURN_RIGHT, STRAFE_L, STRAFE_R | 7 |
| `0x09` DIE_1 | none | — |  |
| `0x0a` DIE_2 | none | — |  |
| `0x0b` DIE | "gab die1", "gab die2" | 14 states | 1 7 17 18 |
| `0x0c` DEAD | "gab dead", "gab dead2" | DIE |  |
| `0x0d` PUSH | "gab push 4ft" | STAND |  |
| `0x0e` RUMMAGE | "gab rummage" | STAND | 19 |
| `0x0f` PICKUP_INVENTORY | "gab lo pickup" | STAND | 20 21 |
| `0x10` TURN_LEFT | "gab turn left" | STAND, TURN_RIGHT |  |
| `0x11` TURN_RIGHT | "gab turn right" | STAND, TURN_LEFT |  |
| `0x12` OPEN_DOOR | "gab open swing door" | STAND | 22 |
| `0x13` KICK_DOOR | "gab kick door open" | STAND |  |
| `0x14` STRAFE_L | "gab strafe l" | STAND, WALK |  |
| `0x15` STRAFE_R | "gab strafe r" | STAND, WALK |  |
| `0x16` LADDER | "gab ladder" | STAND | 1 7 |

#### STRANGER.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand", "standUp_noCollision", 17 layered `draw_*`, "turnlstart", "turnrstart", "getUpDustOff", "standToDumb" | 33 states |  |
| `0x01` WALK | "walk" | STAND, BACKUP, RUN, STRAFE_L, STRAFE_R, PUSH | 1 7 |
| `0x02` BACKUP | "backup" | STAND, WALK, STRAFE_L, STRAFE_R, PUSH | 1 7 |
| `0x03` RUN | "run" | STAND, WALK, BACKUP, STRAFE_L, STRAFE_R, PUSH, RUNJUMPEND | 1 7 |
| `0x04` STRAFE_L | "strafe_l" | STAND, STRAFE_R, PUSH | 1 7 |
| `0x05` STRAFE_R | "strafe_r" | STAND, STRAFE_L | 1 7 |
| `0x06` PUSH | "push" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R |  |
| `0x07` RUNJUMPSTART | "runjumpstart" | RUN |  |
| `0x08` RUNJUMPMIDDLE | "runJumpMiddle" | RUNJUMPSTART | 666 |
| `0x09` RUNJUMPLAND | "runJumpLand" | RUNJUMPMIDDLE |  |
| `0x0a` RUNJUMPEND | "runJumpEnd" | RUNJUMPMIDDLE, RUNJUMPLAND |  |
| `0x0b` STANDJUMPSTART | "standjumpstart" | STAND, WALK, BACKUP, STRAFE_L, STRAFE_R, PUSH |  |
| `0x0c` STANDJUMPMIDDLE | "standJumpMiddle" | STANDJUMPSTART | 667 |
| `0x0d` STANDJUMPLAND | "standJumpLand" | STANDJUMPMIDDLE |  |
| `0x0e` STANDJUMPEND | "standJumpEnd" | STANDJUMPLAND |  |
| `0x0f` FALLING | "falling" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R, RUNJUMPLAND, STANDJUMPLAND, LADDER_UP, LADDER_DOWN |  |
| `0x10` FALLEND | "fallend" | RUNJUMPLAND, RUNJUMPEND, STANDJUMPLAND, STANDJUMPEND, FALLING |  |
| `0x11` FALLEND_HURT | none | — |  |
| `0x12` FALLEND_SPLAT | none | — |  |
| `0x13` PICKUP | "pickup" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R, PUSH | 2 |
| `0x14` PUTDOWN | "putdown" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R, PUSH | 3 |
| `0x15` PICKUP_WAIST | "pickupWaist" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 2 |
| `0x16` PUTDOWN_WAIST | "putdownWaist" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 3 |
| `0x17` PICKUP_CRATE | "pickupCrate" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 2 |
| `0x18` PICKUP_CRATE_SHELF | "pickupCrateShelf" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 2 |
| `0x19` PUTDOWN_CRATE | "putDownCrate" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 3 |
| `0x1a` PUTDOWN_CRATE_SHELF | "putDownCrateShelf" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 3 |
| `0x1b` RUMMAGE | "rummage" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R, PUSH | 19 |
| `0x1c` OPEN_DOOR | "opendoor" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R, PUSH | 22 |
| `0x1d` OPEN_DOOR_SLIDE_LEFT | "openDoorSlideLeft" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 22 |
| `0x1e` OPEN_DOOR_SLIDE_RIGHT | "openDoorSlideRight" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R | 22 |
| `0x1f` PULL_LEVER | "pulllever" | STAND, WALK, BACKUP, RUN, STRAFE_L, STRAFE_R, PUSH | 23 |
| `0x20` GETGRABBED_FRONT | none | — |  |
| `0x21` GETGRABBED_BACK | none | — |  |
| `0x22` GETGRABBED | "hugFront", "hugBack" | 12 states |  |
| `0x23` ESCAPEGRAB | "hugFrontEnd", "hugBackEnd" | GETGRABBED | 6 7 |
| `0x24` HURT | "fallendHurt", "hurt", "layOnGround" | 16 states | 7 |
| `0x25` DIE_1 | none | — |  |
| `0x26` DIE_2 | none | — |  |
| `0x27` DIE_DROWN | none | — |  |
| `0x28` DIE | "dieDrown", "fallendSplat", "die1", "die2" | 39 states | 1 7 17 18 |
| `0x29` DEAD | "deadDrown", "fallendDead", "dead", "dead2" | DIE |  |
| `0x2a` LADDER_UP | "ladderupstart", "ladderuploop", "ladderupend" | STAND, WALK, RUN, STRAFE_L, STRAFE_R, PUSH | 1 7 |
| `0x2b` LADDER_DOWN | "ladderdownstart", "ladderdownloop", "ladderdownend" | STAND, WALK, RUN, STRAFE_L, STRAFE_R, PUSH | 1 7 |
| `0x2c` AXEPICKUPWALL | none | — |  |
| `0x2d` AXESWING | none | — |  |
| `0x2e` SITTING | "sitdown_noCollision", "sitting_noCollision" | STAND, SITGES1, SITGES2, SITGES3 |  |
| `0x2f` DUMBWAITER_UP | "dumbUp" | STAND |  |
| `0x30` DUMBWAITER_DOWN | "dumbDown" | STAND |  |
| `0x31` MANHOLE | "manhole1" | STAND |  |
| `0x32` SITGES1 | "sitges1_noCollision" | **nothing** |  |
| `0x33` SITGES2 | "sitges2_noCollision" | **nothing** |  |
| `0x34` SITGES3 | "sitges3_noCollision" | **nothing** |  |

#### SVETLANA.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "Stand", "kneelToStand" | 22 states |  |
| `0x01` WALK | "Walk" | STAND, RUN, BACKUP, FSTANCE | 1 7 |
| `0x02` RUN | "Run" | STAND, WALK, BACKUP, FSTANCE | 31 37 |
| `0x03` BACKUP | "backup" | STAND, WALK, RUN, FSTANCE |  |
| `0x04` DAMAGE1 | "Damage1" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x05` DAMAGE2 | "Damage2" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x06` DAMAGE3 | "Damage3" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x07` DRAW | "draw" | **nothing** |  |
| `0x08` DIE | "die" | 14 states |  |
| `0x09` DEAD | "dead" | DIE |  |
| `0x0a` FSTANCE | "FStance" | 13 states |  |
| `0x0b` FDAMAGE1 | "FDamage1" | STAND, WALK, RUN, BACKUP, FSTANCE, LATTACK, RATTACK |  |
| `0x0c` FDAMAGE2 | "FDamage2" | STAND, WALK, RUN, BACKUP, FSTANCE, LATTACK, RATTACK |  |
| `0x0d` FDAMAGE3 | "FDamage3" | STAND, WALK, RUN, BACKUP, FSTANCE, LATTACK, RATTACK |  |
| `0x0e` LATTACK | "LAttack" | STAND, FSTANCE | 100 |
| `0x0f` RATTACK | "RAttack" | STAND, FSTANCE | 101 |
| `0x10` PUSHOFF | "PushOff" | GETGRABBED | 100 101 |
| `0x11` THROW | "Throw" | **nothing** |  |
| `0x12` BIGTHROW | "BigThrow" | **nothing** |  |
| `0x13` GETGRABBED | "getgrabbed" | STAND, FSTANCE, EXAMINE, BOW, HEADACHE, STANDTOSIT, SITLOOP, SITTOSTAND |  |
| `0x14` EXAMINE | "standtokneel", "kneeling" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x15` BOW | "bow" | STAND |  |
| `0x16` HEADACHE | "headache", "headache2" | STAND |  |
| `0x17` STANDTOSIT | "standtosit" | **nothing** |  |
| `0x18` SITLOOP | "sitloop" | STANDTOSIT, SITCONVO1, SITCONVO2 |  |
| `0x19` SITTOSTAND | "sittostand" | SITLOOP |  |
| `0x1a` LONGJUMP | "longjump" | STAND, WALK, RUN, BACKUP |  |
| `0x1b` CASTLEJUMP | "castlejump" | STAND, WALK, RUN, BACKUP |  |
| `0x1c`–`0x24` CONVO1–9 | "convo1" … "convo9" | STAND |  |
| `0x25` SITCONVO1 | "sitconvo1" | SITLOOP |  |
| `0x26` SITCONVO2 | "sitconvo2", "uncrosslegs" | SITLOOP, SITCONVO3, SITCONVO4 |  |
| `0x27` SITCONVO3 | "sitconvo3", "legscrossedconverse" | SITLOOP, SITCONVO4 |  |
| `0x28` SITCONVO4 | "sitconvo4", "legscrossedconverse2" | SITLOOP |  |

#### SCAT.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand", "talk1" … "talk22", "draw_stand2coatPocket", "draw_coatPocket2aimPistols" | WALK, RUN, BACKUP, FSTANCE, GETUP, SLUMPWALK, SLUMPBACKUP, DAMAGESTAND, GETGRABBED |  |
| `0x01` WALK | "walk" | STAND, RUN, BACKUP |  |
| `0x02` RUN | "run" | STAND, WALK, BACKUP |  |
| `0x03` BACKUP | "backup" | STAND, WALK, RUN |  |
| `0x04` DIE | "die" | STAND, WALK, RUN, BACKUP, FSTANCE, SLUMPWALK, SLUMPBACKUP, ATTACK, GETGRABBED |  |
| `0x05` DEAD | "dead" | DIE |  |
| `0x06` DRAW | "draw" | STAND, WALK, RUN, BACKUP |  |
| `0x07` FSTANCE | "fstance" | DRAW, SLUMPWALK, SLUMPBACKUP, ATTACK, DAMAGETRANCE, SUIT |  |
| `0x08` GETUP | "getup" | DEAD |  |
| `0x09` SLUMPWALK | "slumpwalk" | FSTANCE, SLUMPBACKUP |  |
| `0x0a` SLUMPBACKUP | "slumpbackup" | FSTANCE, SLUMPWALK |  |
| `0x0b` ATTACK | "attack" | FSTANCE, SLUMPWALK, SLUMPBACKUP |  |
| `0x0c` DAMAGESTAND | "damagestand" | STAND, WALK, RUN, BACKUP |  |
| `0x0d` DAMAGETRANCE | "damagetrance" | FSTANCE, SLUMPWALK, SLUMPBACKUP, ATTACK |  |
| `0x0e` GETGRABBED | "getgrabbed", "munched" | STAND, WALK, RUN, BACKUP, FSTANCE, SLUMPWALK, SLUMPBACKUP |  |
| `0x0f` PUSHOFF | "PushOff" | GETGRABBED | 100 |
| `0x10` SUIT | "suit" | PUSHOFF |  |

#### BARON.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand" | WALK, BACKUP, RUN, ATTACK, RISE1, RISE2, GOAWAY |  |
| `0x01` WALK | "walk" | STAND, BACKUP, RUN |  |
| `0x02` BACKUP | "backup" | STAND, WALK, RUN |  |
| `0x03` RUN | "run" | STAND, WALK, BACKUP |  |
| `0x04` ATTACK | "attack" | STAND, WALK, BACKUP, RUN | 100 |
| `0x05` RISE1 | "rise1" | STAND |  |
| `0x06` RISE2 | "rise2" | STAND |  |
| `0x07` GOAWAY | "goaway" | STAND, WALK, BACKUP, RUN, ATTACK, RISE1, RISE2 | 110 |
| `0x08` TEST | "BScrp001" … "BScrp010", "dead", "riseup" | **nothing** |  |

#### ICEPICK.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand" | 14 states |  |
| `0x01` WALK | "walk" | STAND, RUN, BACKUP, FSTANCE, CRACK | 1 7 |
| `0x02` RUN | "run" | STAND, WALK, BACKUP, FSTANCE, CRACK | 31 37 |
| `0x03` BACKUP | "backup" | STAND, WALK, RUN, FSTANCE, CRACK |  |
| `0x04` DAMAGE1 | "damage1" | STAND, WALK, RUN, BACKUP, FSTANCE, CRACK |  |
| `0x05` DAMAGE2 | "damage2" | STAND, WALK, RUN, BACKUP, FSTANCE, CRACK |  |
| `0x06` DAMAGE3 | "damage3" | STAND, WALK, RUN, BACKUP, FSTANCE, CRACK |  |
| `0x07` DRAW | none | — |  |
| `0x08` DIE | "die" | STAND, WALK, RUN, BACKUP, FSTANCE, GETGRABBED, CRACK |  |
| `0x09` DEAD | "dead" | DIE |  |
| `0x0a` FSTANCE | "fstance" | 12 states | 103 |
| `0x0b` FDAMAGE1 | "fdamage1" | STAND, WALK, RUN, BACKUP, FSTANCE, CRACK |  |
| `0x0c` FDAMAGE2 | "fdamage2" | STAND, WALK, RUN, BACKUP, FSTANCE, CRACK |  |
| `0x0d` FDAMAGE3 | "fdamage3" | STAND, WALK, RUN, BACKUP, FSTANCE, CRACK |  |
| `0x0e` ATTACK1 | "attack1" | FSTANCE, CRACK | 100 101 |
| `0x0f` ATTACK2 | "attack2" | FSTANCE, CRACK | 100 102 |
| `0x10` ATTACK3 | "attack3" | FSTANCE, CRACK | 100 101 102 |
| `0x11` PUSHOFF | "pushoff" | GETGRABBED |  |
| `0x12` GETGRABBED | "getgrabbed" | STAND, FSTANCE, CRACK |  |
| `0x13` PICKUPGUN | "pickupgun" | STAND, WALK, RUN, BACKUP | 104 |
| `0x14` SHOOT | "shoot" | **nothing** |  |
| `0x15` CRACK | "crack" | FSTANCE |  |
| `0x16` THROWGUN | "throwgun" | STAND, WALK, RUN, BACKUP | 105 |
| `0x17` PICKUPWAIST | "pickupwaist" | STAND |  |
| `0x18` BENDBARS | "bendbars" | STAND |  |
| `0x19` DOUBLESPRAY | "doublespray" | STAND |  |

#### HAYSTACK.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand" | WALK, RUN, BACKUP, DAMAGE1, DAMAGE2, DAMAGE3, FSTANCE, SPAR |  |
| `0x01` WALK | "walk" | STAND, RUN, BACKUP, FSTANCE | 1 7 |
| `0x02` RUN | "run" | STAND, WALK, BACKUP, FSTANCE | 31 37 |
| `0x03` BACKUP | "backup" | STAND, WALK, RUN, FSTANCE |  |
| `0x04` DAMAGE1 | "damage1" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x05` DAMAGE2 | "damage2" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x06` DAMAGE3 | "damage3" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x07` DRAW | none | — |  |
| `0x08` DIE | "die" | STAND, WALK, RUN, BACKUP, FSTANCE, GETGRABBED |  |
| `0x09` DEAD | "dead" | DIE |  |
| `0x0a` FSTANCE | "fstance" | 11 states |  |
| `0x0b` FDAMAGE1 | "fdamage1" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x0c` FDAMAGE2 | "fdamage2" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x0d` FDAMAGE3 | "fdamage3" | STAND, WALK, RUN, BACKUP, FSTANCE |  |
| `0x0e` ATTACK1 | "attack1" | FSTANCE | 101 |
| `0x0f` ATTACK2 | "attack2" | FSTANCE | 102 |
| `0x10` ATTACK3 | "attack3" | FSTANCE | 101 |
| `0x11` PUSHOFF | "pushoff" | GETGRABBED |  |
| `0x12` GETGRABBED | "getgrabbed" | STAND, FSTANCE |  |
| `0x13` SPAR | "spar1" … "spar5" | STAND | 101–108 |
| `0x14` MEDITATE | "meditate" | STAND |  |

#### COLONEL.SKL

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand" | WALK, RUN, BACKUP, DAMAGE1, DAMAGE2, DAMAGE3, DRAW, SHOOT, PUSHOFF |  |
| `0x01` WALK | "walk" | STAND, RUN, BACKUP |  |
| `0x02` RUN | "run" | STAND, WALK, BACKUP |  |
| `0x03` BACKUP | "backup" | STAND, WALK, RUN |  |
| `0x04` DAMAGE1 | "damage1" | STAND, WALK, RUN, BACKUP |  |
| `0x05` DAMAGE2 | "damage2" | STAND, WALK, RUN, BACKUP |  |
| `0x06` DAMAGE3 | "damage3" | STAND, WALK, RUN, BACKUP |  |
| `0x07` DIE | "die" | STAND, WALK, RUN, BACKUP, GETGRABBED |  |
| `0x08` DEAD | "dead" | DIE |  |
| `0x09` DRAW | "draw" | **nothing** |  |
| `0x0a` SHOOT | "shoot" | **nothing** |  |
| `0x0b` PUSHOFF | "pushoff" | GETGRABBED |  |
| `0x0c` GETGRABBED | "getgrabbed" | STAND |  |

#### MOLOCH_D.SKL (demon)

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand" | 13 states |  |
| `0x01` WALK | "walk" | STAND, BACKUP, ELEVATOR, GRAG, MELEEFIGHT, OVERHEADSMASH, PUNCH, SHAKING, CONVERSE, WEAKWALK | 1 7 |
| `0x02` BACKUP | "backup" | STAND, WALK |  |
| `0x03` DAMAGE | "damage" | STAND |  |
| `0x04` DIE | "die" | STAND |  |
| `0x05` DEAD | "dead" | STAND, DIE |  |
| `0x06` ELEVATOR | "elevator" | STAND |  |
| `0x07` GRAG | "grag" | STAND |  |
| `0x08` KNEEL | "kneel", "kneeling", "kneelup" | STAND |  |
| `0x09` MELEEFIGHT | "meleefight" | STAND |  |
| `0x0a` OVERHEADSMASH | "overheadsmash" | STAND |  |
| `0x0b` PUNCH | "punch" | STAND |  |
| `0x0c` SHAKING | "shaking" | STAND |  |
| `0x0d` CONVERSE | "converse" | STAND |  |
| `0x0e` WEAKWALK | "weakwalk" | STAND |  |
| `0x0f` SPAR | "spar1" … "spar5" | STAND |  |

#### MOLOCH_H.SKL (human)

| State | Motions | Entered from | Signals |
|---|---|---|---|
| `0x00` STAND | "stand" | WALK, BACKUP, SCRIPT03, SCRIPT04, SCRIPT05, SCRIPT06, SITTINGDOWN, SCRIPT01 |  |
| `0x01` WALK | "walk" | STAND, BACKUP, SCRIPT03, SCRIPT04, SCRIPT05, SCRIPT06, SCRIPT01 | 1 7 |
| `0x02` BACKUP | "backup" | STAND, WALK |  |
| `0x03`–`0x06` SCRIPT03–06 | "script03" … "script06" | STAND |  |
| `0x07` SITTINGDOWN | "sit", "sittingdown", "getup" | STAND |  |
| `0x08` SCRIPT01 | "script01" | STAND |  |

## States with no route in

A motion plays without a route in four ways, and the shipped game uses none of them
to enter a hero state marked **nothing** above.

| Way in | What it does | Hero uses in the shipped game |
|---|---|---|
| Code: `jumpToMotion`, `jumpToMotionByName` | Jumps the controller to a motion, no tween | Motion 0 for a hero carried into a mission (`CDemonMission_createOneHero_FUN_00524920`), "stand" on `CStranger_reset_FUN_005c6750`, and Moloch's morph onto the same-named motion in his other skeleton |
| Script: `slamModelToMotion(actor, motion)` | `jumpToMotion` to the named motion at frame 0, then asks for that motion's state | Only routed motions: the Stranger's stand, layonground and ladderuploop, Svetlana's stand and run |
| Script: `gesture(actor, motion)` | `CCharacter_initGesture_FUN_0042d390`: blends the motion once over the bones below `gesture_branch_root`, eased in and out to a peak weight of 0.85. The state is not entered | Baron's TEST motions (see Baron); IcePick's attack3, pickupwaist and bendbars; Svetlana's convo1–9 and bow; Scat's talks; Moloch's converse; the Stranger's pickupwaist and rummage |
| Mission record: the "motion state" block | The actor starts in the saved motion | Svetlana's "sitloop" in HQ-ACT1.MSN. Every other placed hero starts in stand, Moloch also in elevator and Scat also in dead |

So, per state:

| Class | State | Reached by |
|---|---|---|
| Stranger | SITGES1–3 | nothing |
| Svetlana | DRAW, THROW, BIGTHROW, STANDTOSIT | nothing |
| Baron | TEST | never entered; eight of its motions play as script gestures |
| IcePick | SHOOT | never entered; "shoot" frame 0 is the layered aiming pose |
| Colonel | DRAW, SHOOT | never entered; `shims/game/hero_colonel.h` plays both motions as upper-body layers |

The audit covers every `jumpToMotion` and `jumpToMotionByName` call site, the
`setModelState`, `slamModelToMotion` and `gesture` calls in the shipped `.SCR` and
`.MSN` files of every POD (commented-out lines excluded), the event and `CScript`
command sets (no other command
names a motion or a state), and the starting motion of every placed hero-class actor.
