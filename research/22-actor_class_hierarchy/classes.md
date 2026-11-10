# Classes

Per class: its parent and table length in each build, and the slots it overrides (its own implementation rather than its parent's).

## CActorDestination

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup

## CAmmo

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CAmmoBox

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CAmmo_Bullet

- **bw3**: parent CAmmo, no labelled table

## CAmmo_Mana

- **bw3**: parent CAmmo, no labelled table

## CAmmo_ManaLarge

- **bw3**: parent CAmmo, no labelled table

## CAngel_Demon

- **bw3**: parent CHotDemon, no labelled table

## CAngel_Forest

- **bw3**: parent CHotDemon, no labelled table

## CAngel_Spirit

- **bw3**: parent CHotDemon, no labelled table

## CAnvil

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CArmour

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup

## CAsgaya

- **bw3**: parent CNPC, no labelled table

## CBaal

- **bw3**: parent CEnemy, no labelled table

## CBaalSkel

- **bw3**: parent CBoneGuy, no labelled table

## CBackgroundActor

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, getPropertyList, process, renderBackground, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup

## CBaron

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, dtor, getActorType, getCollisionType, getPropertyList, isGrabbable, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, renderTransparent, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, dtor, getActorType, getCollisionType, isGrabbable, isWeaponDrawn, process, processDamage, renderOpaque, renderTransparent, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getCollisionType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, renderTransparent, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getCollisionType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, renderTransparent, reset, setup, testCylinderCollision, testLineIntersection

## CBaronWeapon

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, isReadyToFire, process, renderAimBeam, renderOpaque, setWeaponState, setup
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, isReadyToFire, process, renderAimBeam, renderOpaque, setWeaponState, setup
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, isReadyToFire, process, renderAimBeam, renderOpaque, setWeaponState, setup
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, isReadyToFire, process, renderAimBeam, renderOpaque, setWeaponState, setup

## CBarrier

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, processInEditor, renderTransparent, setup, showEditorHelp, updateCollisionData
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, renderTransparent, setup, updateCollisionData
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, renderTransparent, setup, updateCollisionData
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, renderTransparent, setup, updateCollisionData
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, renderTransparent, setup, updateCollisionData

## CBasicEnemy

- **blairwitch2**: parent CEnemy, no labelled table

## CBasicNPC

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CBassPlayer

- **nocedit**: parent CNPC, 85 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup
- **nocturne**: parent CNPC, 78 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup
- **bw1**: parent CNPC, 80 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup
- **blairwitch2**: parent CNPC, 83 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup

## CBat

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getPropertyList, process, processInEditor, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup

## CBatCreature

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup

## CBatman

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, renderOpaque, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup

## CBattery

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getPropertyList, onDropped, pickup, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup

## CBeast

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getDeathState, getPropertyList, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, setup

## CBelling

- **blairwitch2**: parent CBasicNPC, no labelled table

## CBiggs

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, renderOpaque, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup

## CBindEvil

- **bw3**: parent CWeapon, no labelled table

## CBird

- **bw1**: parent CCharacter, no labelled table
- **bw3**: parent CCharacter, no labelled table

## CBlunderbus

- **bw3**: parent CWeapon, no labelled table

## CBodyPart

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBoundingBox, getCarrier, getCollisionType, initializeInEditor, onDropped, pickup, process, processInEditor, renderBackground, renderOpaque, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup

## CBoneGuy

- **nocedit**: parent CEnemy, 89 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, randomize, renderOpaque, renderTransparent, reset, setup
- **nocturne**: parent CEnemy, 81 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, renderTransparent, reset, setup
- **bw1**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, renderTransparent, reset, setup
- **blairwitch2**: parent CEnemy, 86 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, renderTransparent, reset, setup
- **bw3**: parent CEnemy, 84 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, renderTransparent, reset, setup

## CBoxActor

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, getPropertyList, onDropped, onPickup, pickup, process, processInEditor, renderOpaque, renderTransparent, setPositionAndOrientation, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, onDropped, onPickup, pickup, process, renderOpaque, renderTransparent, setPositionAndOrientation, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, onDropped, onPickup, pickup, process, renderOpaque, renderTransparent, setPositionAndOrientation, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, onDropped, onPickup, pickup, process, renderOpaque, renderTransparent, setPositionAndOrientation, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, onDropped, onPickup, pickup, process, renderOpaque, renderTransparent, setPositionAndOrientation, setup

## CBride

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getPropertyList, getTargetPoint, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getTargetPoint, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getTargetPoint, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getTargetPoint, getTargetPoints, process, processDamage, setup

## CBugs

- **nocedit**: parent CEnemy, 88 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, getPropertyList, process, processDamage, processInEditor, renderOpaque, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, process, processDamage, renderOpaque, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, process, processDamage, renderOpaque, setup

## CBurncross

- **bw3**: parent CWeapon, no labelled table

## CCarved

- **bw1**: parent CEnemy, no labelled table
- **bw3**: parent CEnemy, no labelled table

## CChain

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 54 slots; overrides <new slot 1>, <new slot 2>, archive, calculateChecksum, canPickup, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, cylinderGroundCheck, dtor, evaluateTriggerCondition, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, getInteractionInfo, getPathMap, handleFootstep, onDropped, onLaserHit, onPickup, pickup, playAmbientSound, playAmbientSoundWithDelay, playAttackHitEffects, playSound, playSoundWithDelay, process, processActionButton, processFootstep, processFootstepAtOffset, processMeleeHit, renderBackground, renderOpaque, renderTargetPoints, renderTransparent, setPositionAndOrientation, setup, shouldIgnoreForTargeting, spawnFlies, stopInteraction, testCylinderCollision, testLineIntersection, updateCollisionData, updateInteraction
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup

## CCharacter

- **nocedit**: parent CDemonActor, 85 slots; overrides applyDamage, archive, attractActorToward, calculateChecksum, canBeAttracted, canBeGrabbed, canLookAt, checkCylinderCollisionWorld, clearDoorTarget, drop, dropCarriedObject, dtor, getBoundingBox, getCarryObjToBodyXForm, getCollisionType, getDeathState, getGrabbed, getGrabber, getPartDominantBone, getPropertyList, hasDoorTarget, isGrabbable, isInvulnerable, isWalkComplete, kill, onActorDeleted, onVictimLost, processDamage, processInEditor, releaseFromGrab, releaseVictim, renderBackground, renderOpaque, renderTransparent, setDoorTarget, setPositionAndOrientation, setWalkTarget, setWalkTargetImmediate, setWalkTimeout, setup, spawnFlies, testDamageLine
- **nocturne**: parent CDemonActor, 78 slots; overrides applyDamage, archive, attractActorToward, calculateChecksum, canBeAttracted, canBeGrabbed, canLookAt, checkCylinderCollisionWorld, clearDoorTarget, drop, dropCarriedObject, dtor, getBoundingBox, getCarryObjToBodyXForm, getCollisionType, getDeathState, getGrabbed, getGrabber, getPartDominantBone, hasDoorTarget, isGrabbable, isInvulnerable, isWalkComplete, kill, onVictimLost, processDamage, releaseFromGrab, releaseVictim, renderBackground, renderOpaque, renderTransparent, setDoorTarget, setPositionAndOrientation, setWalkTarget, setWalkTargetImmediate, setWalkTimeout, setup, spawnFlies, testDamageLine
- **bw1**: parent CDemonActor, 80 slots; overrides <new slot 1>, <new slot 2>, applyDamage, archive, attractActorToward, calculateChecksum, canBeAttracted, canBeGrabbed, canLookAt, checkCylinderCollisionWorld, clearDoorTarget, drop, dropCarriedObject, dtor, getBoundingBox, getCarryObjToBodyXForm, getCollisionType, getDeathState, getGrabbed, getGrabber, getPartDominantBone, hasDoorTarget, isGrabbable, isInvulnerable, isWalkComplete, kill, onLaserHit, onVictimLost, processDamage, releaseFromGrab, releaseVictim, renderBackground, renderOpaque, renderTransparent, setDoorTarget, setPositionAndOrientation, setWalkTarget, setWalkTargetImmediate, setWalkTimeout, setup, spawnFlies, testDamageLine
- **blairwitch2**: parent CDemonActor, 83 slots; overrides <new slot 3>, <new slot 4>, <new slot 82>, applyDamage, archive, attractActorToward, calculateChecksum, canBeAttracted, canBeGrabbed, canLookAt, checkCylinderCollisionWorld, clearDoorTarget, drop, dropCarriedObject, dtor, getBoundingBox, getCarryObjToBodyXForm, getCollisionType, getDeathState, getGrabbed, getGrabber, getPartDominantBone, hasDoorTarget, isGrabbable, isInvulnerable, isWalkComplete, kill, onLaserHit, onVictimLost, processDamage, releaseFromGrab, releaseVictim, renderBackground, renderOpaque, renderTransparent, setDoorTarget, setPositionAndOrientation, setWalkTarget, setWalkTargetImmediate, setWalkTimeout, setup, spawnFlies, testDamageLine
- **bw3**: parent CDemonActor, 80 slots; overrides <new slot 1>, <new slot 2>, applyDamage, archive, attractActorToward, calculateChecksum, canBeAttracted, canBeGrabbed, canLookAt, checkCylinderCollisionWorld, clearDoorTarget, drop, dropCarriedObject, dtor, getBoundingBox, getCarryObjToBodyXForm, getCollisionType, getDeathState, getGrabbed, getGrabber, getPartDominantBone, hasDoorTarget, isGrabbable, isInvulnerable, isWalkComplete, kill, onLaserHit, onVictimLost, processDamage, releaseFromGrab, releaseVictim, renderBackground, renderOpaque, renderTransparent, setDoorTarget, setPositionAndOrientation, setWalkTarget, setWalkTargetImmediate, setWalkTimeout, setup, spawnFlies, testDamageLine

## CColonel

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, dtor, getActorType, getPropertyList, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, dtor, getActorType, isWeaponDrawn, process, processDamage, renderOpaque, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection

## CConfederate

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CConfederateZombie

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CConstruct

- **bw1**: parent CEnemy, no labelled table
- **blairwitch2**: parent CEnemy, no labelled table
- **bw3**: parent CEnemy, no labelled table

## CConstruct_Bone

- **bw3**: parent CConstruct, no labelled table

## CConstruct_Red

- **bw3**: parent CConstruct, no labelled table

## CConveyor

- **nocedit**: parent CPlatform, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderBackground, renderOpaque, renderTransparent, setup
- **nocturne**: parent CPlatform, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw1**: parent CPlatform, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CPlatform, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, renderTransparent, setup

## CCrate

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getPropertyList, getTargetPoints, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getTargetPoints, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getTargetPoints, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getTargetPoints, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getTargetPoints, onDropped, pickup, process, renderBackground, renderOpaque, setup

## CCross

- **blairwitch2**: parent CMelee, no labelled table

## CCrossbow

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, process, renderOpaque, renderTransparent
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, process, renderOpaque, renderTransparent
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, process, renderOpaque, renderTransparent
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, process, renderOpaque, renderTransparent

## CCryptVessel

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getPropertyList, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, renderTransparent, setup

## CCurtain

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderOpaque, renderTransparent, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, process, renderOpaque, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, process, renderOpaque, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, process, renderOpaque, renderTransparent, setup

## CDarkwolf

- **bw3**: parent CEnemy, no labelled table

## CDemnfolk

- **bw1**: parent CEnemy, no labelled table
- **bw3**: parent CEnemy, no labelled table

## CDemonActor

- **nocedit**: parent —, 59 slots; overrides addFilesToExtract, allowBulletHoles, archive, calculateChecksum, canLookAt, canPickup, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, cylinderGroundCheck, drop, dtor, evaluateTriggerCondition, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, getInteractionInfo, getPathMap, getPropertyList, getTargetPoints, handleFootstep, initializeInEditor, onActorDeleted, onAreaDeleted, onDropped, onLaserHit, onPickup, pickup, playAmbientSound, playAmbientSoundWithDelay, playAttackHitEffects, playSound, playSoundWithDelay, process, processActionButton, processFootstep, processFootstepAtOffset, processInEditor, processMeleeHit, renderBackground, renderOpaque, renderTargetPoints, renderTransparent, setPositionAndOrientation, setup, shouldIgnoreForTargeting, showEditorHelp, spawnFlies, startInteraction, stopInteraction, testCylinderCollision, testLineIntersection, updateCollisionData, updateInteraction
- **nocturne**: parent —, 52 slots; overrides allowBulletHoles, archive, calculateChecksum, canLookAt, canPickup, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, cylinderGroundCheck, drop, dtor, evaluateTriggerCondition, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, getInteractionInfo, getPathMap, getTargetPoints, handleFootstep, onDropped, onLaserHit, onPickup, pickup, playAmbientSound, playAmbientSoundWithDelay, playAttackHitEffects, playSound, playSoundWithDelay, process, processActionButton, processFootstep, processFootstepAtOffset, processMeleeHit, renderBackground, renderOpaque, renderTargetPoints, renderTransparent, setPositionAndOrientation, setup, shouldIgnoreForTargeting, spawnFlies, startInteraction, stopInteraction, testCylinderCollision, testLineIntersection, updateCollisionData, updateInteraction
- **bw1**: parent —, 54 slots; overrides <new slot 1>, <new slot 2>, allowBulletHoles, archive, calculateChecksum, canLookAt, canPickup, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, cylinderGroundCheck, drop, dtor, evaluateTriggerCondition, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, getInteractionInfo, getPathMap, getTargetPoints, handleFootstep, onDropped, onLaserHit, onPickup, pickup, playAmbientSound, playAmbientSoundWithDelay, playAttackHitEffects, playSound, playSoundWithDelay, process, processActionButton, processFootstep, processFootstepAtOffset, processMeleeHit, renderBackground, renderOpaque, renderTargetPoints, renderTransparent, setPositionAndOrientation, setup, shouldIgnoreForTargeting, spawnFlies, startInteraction, stopInteraction, testCylinderCollision, testLineIntersection, updateCollisionData, updateInteraction
- **blairwitch2**: parent —, 56 slots; overrides <new slot 0>, <new slot 1>, <new slot 3>, <new slot 4>, allowBulletHoles, archive, calculateChecksum, canLookAt, canPickup, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, cylinderGroundCheck, drop, dtor, evaluateTriggerCondition, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, getInteractionInfo, getPathMap, getTargetPoints, handleFootstep, onDropped, onLaserHit, onPickup, pickup, playAmbientSound, playAmbientSoundWithDelay, playAttackHitEffects, playSound, playSoundWithDelay, process, processActionButton, processFootstep, processFootstepAtOffset, processMeleeHit, renderBackground, renderOpaque, renderTargetPoints, renderTransparent, setPositionAndOrientation, setup, shouldIgnoreForTargeting, spawnFlies, startInteraction, stopInteraction, testCylinderCollision, testLineIntersection, updateCollisionData, updateInteraction
- **bw3**: parent —, 54 slots; overrides <new slot 1>, <new slot 2>, allowBulletHoles, archive, calculateChecksum, canLookAt, canPickup, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, cylinderGroundCheck, drop, dtor, evaluateTriggerCondition, fillAttackDamageInfo, getActorType, getAllowedMeleeAttackTypes, getBlockVirtualDirectorFlag, getBoundingBox, getCarrier, getCollisionType, getGroundType, getInteractionInfo, getPathMap, getTargetPoints, handleFootstep, onDropped, onLaserHit, onPickup, pickup, playAmbientSound, playAmbientSoundWithDelay, playAttackHitEffects, playSound, playSoundWithDelay, process, processActionButton, processFootstep, processFootstepAtOffset, processMeleeHit, renderBackground, renderOpaque, renderTargetPoints, renderTransparent, setPositionAndOrientation, setup, shouldIgnoreForTargeting, spawnFlies, startInteraction, stopInteraction, testCylinderCollision, testLineIntersection, updateCollisionData, updateInteraction

## CDemonDog

- **bw3**: parent CZombieDog, no labelled table

## CDemonShadow

- **bw3**: parent CShadow, no labelled table

## CDisease

- **bw3**: parent CWeapon, no labelled table

## CDjien

- **bw1**: parent CEnemy, no labelled table

## CDoc

- **bw1**: parent CHero, no labelled table
- **blairwitch2**: parent CHero, no labelled table

## CDog

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CDog_Forest

- **bw3**: parent CZombieDog, no labelled table

## CDoor

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, getPropertyList, process, processInEditor, renderBackground, renderOpaque, setup, updateCollisionData
- **nocturne**: parent CDemonActor, 52 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup, updateCollisionData
- **bw1**: parent CDemonActor, 54 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup, updateCollisionData
- **blairwitch2**: parent CDemonActor, 56 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup, updateCollisionData
- **bw3**: parent CDemonActor, 54 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup, updateCollisionData

## CDraculaBride

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getDeathState, getPropertyList, getTargetPoints, process, processDamage, renderOpaque, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup

## CDrip

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CDrone

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getPropertyList, getTargetPoints, process, processDamage, randomize, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup

## CDrummer

- **nocedit**: parent CNPC, 85 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup
- **nocturne**: parent CNPC, 78 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup
- **bw1**: parent CNPC, 80 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup
- **blairwitch2**: parent CNPC, 83 slots; overrides dtor, getActorType, getCarryObjToBodyXForm, processDamage, setup

## CDynamite

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **bw3**: parent CWeapon, 63 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam

## CElephantGun

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam
- **bw3**: parent CWeapon, 63 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam

## CEmitter

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderBackground, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup

## CEnemy

- **nocedit**: parent CCharacter, 88 slots; overrides archive, dtor, getPropertyList, getTargetPoint, getTargetPoints, onVictimLost, processDamage, randomize, releaseVictim, renderBackground, setup, updateVictim
- **nocturne**: parent CCharacter, 80 slots; overrides archive, dtor, getTargetPoint, getTargetPoints, onVictimLost, processDamage, releaseVictim, renderBackground, setup, updateVictim
- **bw1**: parent CCharacter, 82 slots; overrides archive, dtor, getTargetPoint, getTargetPoints, onVictimLost, processDamage, releaseVictim, renderBackground, setup, updateVictim
- **blairwitch2**: parent CCharacter, 85 slots; overrides archive, dtor, getTargetPoint, getTargetPoints, onVictimLost, processDamage, releaseVictim, renderBackground, setup, updateVictim
- **bw3**: parent CCharacter, 83 slots; overrides archive, dtor, getTargetPoint, getTargetPoints, isGrabbable, onVictimLost, processDamage, randomize, releaseVictim, renderBackground, setup, updateVictim

## CEtherealDog

- **bw3**: parent CZombieDog, no labelled table

## CExorcism

- **bw3**: parent CWeapon, no labelled table

## CFilmProjector

- **nocedit**: parent CActorDestination, 59 slots; overrides archive, dtor, getActorType, getBoundingBox, getPropertyList, process, renderOpaque, setup
- **nocturne**: parent CActorDestination, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup
- **bw1**: parent CActorDestination, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup
- **blairwitch2**: parent CActorDestination, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup
- **bw3**: parent CActorDestination, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, process, renderOpaque, setup

## CFilmReel

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getPropertyList, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderBackground, renderOpaque, setup

## CFirestaff

- **bw3**: parent CWeapon, no labelled table

## CFlame

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderBackground, renderTransparent, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderTransparent, setup

## CFlameCan

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, getTargetPoints, process, renderOpaque, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getTargetPoints, process, renderOpaque, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getTargetPoints, process, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getTargetPoints, process, renderOpaque, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getTargetPoints, process, renderOpaque, renderTransparent, setup

## CFlameThrower

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam

## CFlashlight

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, renderAimBeam
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, renderAimBeam
- **bw3**: parent CWeapon, 63 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, renderAimBeam

## CFlies

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CFlintlock

- **bw3**: parent CWeapon, no labelled table

## CFrankenstienMachine

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, initializeInEditor, process, processInEditor, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CGabriella

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, getPropertyList, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, renderTransparent, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, isWeaponDrawn, process, processDamage, renderOpaque, renderTransparent, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, renderTransparent, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, renderTransparent, reset, setup, testCylinderCollision, testLineIntersection

## CGargoyle

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, renderOpaque, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup

## CGasMask

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CGhostChild

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CGhoul

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, canBeAttracted, dtor, getActorType, getPropertyList, getTargetPoint, getTargetPoints, process, processDamage, randomize, renderBackground, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, canBeAttracted, dtor, getActorType, getTargetPoint, getTargetPoints, process, processDamage, renderBackground, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, canBeAttracted, dtor, getActorType, getTargetPoint, getTargetPoints, process, processDamage, renderBackground, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, canBeAttracted, dtor, getActorType, getTargetPoint, getTargetPoints, process, processDamage, renderBackground, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, canBeAttracted, dtor, getActorType, getTargetPoint, getTargetPoints, process, processDamage, renderBackground, setup

## CGlass

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, getPropertyList, onLaserHit, process, processInEditor, renderBackground, renderOpaque, renderTransparent, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderBackground, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderBackground, renderOpaque, renderTransparent, setup

## CGoggles

- **bw1**: parent CDemonActor, no labelled table
- **blairwitch2**: parent CDemonActor, no labelled table
- **bw3**: parent CDemonActor, no labelled table

## CGrandma

- **blairwitch2**: parent CBasicNPC, no labelled table

## CGrave

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderBackground, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, setup

## CGun

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage
- **bw3**: parent CWeapon, 63 slots; overrides dtor, fire, getActorType, getDamage

## CHag

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CHand

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CHaystack

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, dtor, getActorType, getPropertyList, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, dtor, getActorType, isWeaponDrawn, process, processDamage, renderOpaque, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection

## CHeal

- **bw3**: parent CWeapon, no labelled table

## CHealthItem

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, onPickup, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, setup

## CHealthItemSmall

- **bw3**: parent CHealthItem, no labelled table

## CHecaitomix

- **bw3**: parent CEnemy, no labelled table

## CHero

- **nocedit**: parent CCharacter, 89 slots; overrides addFilesToExtract, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getGrabbed, getPathMap, getPropertyList, isGrabbable, isInvulnerable, isWeaponDrawn, kill, releaseFromGrab, reset, setup, testCylinderCollision, testLineIntersection
- **nocturne**: parent CCharacter, 82 slots; overrides archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, releaseFromGrab, reset, setup, testCylinderCollision, testLineIntersection
- **bw1**: parent CCharacter, no labelled table
- **blairwitch2**: parent CCharacter, no labelled table
- **bw3**: parent CCharacter, no labelled table

## CHeroPlaceholder

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, dtor, getActorType, getBoundingBox, getPropertyList, renderTransparent
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, renderTransparent
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, renderTransparent
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, renderTransparent
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, renderTransparent

## CHighPriestOfGardath

- **nocedit**: parent CNPC, 85 slots; overrides archive, dtor, getActorType, getPropertyList, process, processDamage
- **nocturne**: parent CNPC, 78 slots; overrides archive, dtor, getActorType, process, processDamage
- **bw1**: parent CNPC, 80 slots; overrides archive, dtor, getActorType, process, processDamage
- **blairwitch2**: parent CNPC, 83 slots; overrides archive, dtor, getActorType, process, processDamage

## CHino

- **bw3**: parent CEnemy, no labelled table

## CHiram

- **nocedit**: parent CNPC, 85 slots; overrides addFilesToExtract, archive, dtor, getActorType, getPropertyList, process, setup
- **nocturne**: parent CNPC, 78 slots; overrides archive, dtor, getActorType, process, setup
- **bw1**: parent CNPC, 80 slots; overrides archive, dtor, getActorType, process, setup
- **blairwitch2**: parent CNPC, 83 slots; overrides archive, dtor, getActorType, process, setup

## CHolycross

- **bw3**: parent CWeapon, no labelled table

## CHostage

- **nocedit**: parent CNPC, 85 slots; overrides addFilesToExtract, archive, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getPropertyList, isGrabbable, process, processDamage, renderBackground, renderOpaque, setup
- **nocturne**: parent CNPC, 78 slots; overrides archive, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, isGrabbable, process, processDamage, renderBackground, renderOpaque, setup
- **bw1**: parent CNPC, 80 slots; overrides archive, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, isGrabbable, process, processDamage, renderBackground, renderOpaque, setup
- **blairwitch2**: parent CNPC, 83 slots; overrides archive, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, isGrabbable, process, processDamage, renderBackground, renderOpaque, setup

## CHotDemon

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getDeathState, getPropertyList, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, getTargetPoints, process, processDamage, setup

## CIcePick

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, getPropertyList, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, isWeaponDrawn, process, processDamage, renderOpaque, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection

## CImp

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, attractActorToward, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, attractActorToward, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, attractActorToward, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, attractActorToward, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, attractActorToward, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, setup

## CKedward

- **bw3**: parent CEnemy, no labelled table

## CKeyActor

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, onPickup, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCollisionType, onPickup, process, renderOpaque, setup

## CLadder

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, getPropertyList, onActorDeleted, process, processInEditor, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup

## CLantern

- **blairwitch2**: parent CWeapon, no labelled table

## CLarva

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getPropertyList, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup

## CLava

- **bw3**: parent CWaterActor, no labelled table

## CLever

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CLightActor

- **nocedit**: parent CBoxActor, 59 slots; overrides archive, dtor, getActorType, getPropertyList, initializeInEditor, process, setup
- **nocturne**: parent CBoxActor, 52 slots; overrides archive, dtor, getActorType, process, setup
- **bw1**: parent CBoxActor, 54 slots; overrides archive, dtor, getActorType, process, setup
- **blairwitch2**: parent CBoxActor, 56 slots; overrides archive, dtor, getActorType, process, setup
- **bw3**: parent CBoxActor, 54 slots; overrides archive, dtor, getActorType, process, setup

## CLightCone

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderTransparent, setup

## CLightGun

- **nocedit**: parent CWeapon, 67 slots; overrides addFilesToExtract, dtor, fire, getActorType, getDamage, process, renderAimBeam
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, process, renderAimBeam
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, process, renderAimBeam
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, getMuzzlePoint, process, renderAimBeam

## CLightPis

- **bw1**: parent CWeapon, no labelled table

## CLightStaff

- **bw3**: parent CWeapon, no labelled table

## CMansionPuzzleCircle

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, onLaserHit, process, processInEditor, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, onLaserHit, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, onLaserHit, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, onLaserHit, process, renderOpaque, setup

## CMarquee

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderOpaque, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, renderTransparent, setup

## CMattanntote

- **bw3**: parent CEnemy, no labelled table

## CMelee

- **nocedit**: parent CWeapon, 67 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, fire, getActorType, getAllowedMeleeAttackTypes, getDamage, getPropertyList, playAttackHitEffects, process, renderAimBeam, setWeaponState
- **nocturne**: parent CWeapon, 60 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, fire, getActorType, getAllowedMeleeAttackTypes, getDamage, playAttackHitEffects, process, renderAimBeam, setWeaponState
- **bw1**: parent CWeapon, 62 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, fire, getActorType, getAllowedMeleeAttackTypes, getDamage, playAttackHitEffects, process, renderAimBeam, setWeaponState
- **blairwitch2**: parent CWeapon, 64 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, fire, getActorType, getAllowedMeleeAttackTypes, getDamage, playAttackHitEffects, process, renderAimBeam, setWeaponState
- **bw3**: parent CWeapon, 63 slots; overrides archive, canPickup, dtor, fillAttackDamageInfo, fire, getActorType, getAllowedMeleeAttackTypes, getDamage, playAttackHitEffects, process, renderAimBeam, setWeaponState

## CMeleeAxe

- **blairwitch2**: parent CMelee, no labelled table

## CMimic

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getDeathState, getPropertyList, onActorDeleted, process, renderBackground, renderOpaque, renderTransparent, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, process, renderBackground, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getDeathState, process, renderBackground, renderOpaque, renderTransparent, setup

## CMineCar

- **nocedit**: parent CPlatform, no labelled table
- **nocturne**: parent CPlatform, no labelled table
- **bw1**: parent CPlatform, no labelled table
- **blairwitch2**: parent CPlatform, no labelled table

## CMirrorHack

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, dtor, getActorType, getBoundingBox, getCollisionType, getInteractionInfo, onLaserHit, process, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction
- **nocturne**: parent CDemonActor, 52 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType, getInteractionInfo, onLaserHit, process, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction
- **bw1**: parent CDemonActor, 54 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType, getInteractionInfo, onLaserHit, process, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction
- **blairwitch2**: parent CDemonActor, 56 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType, getInteractionInfo, onLaserHit, process, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction

## CMobster

- **nocedit**: parent CEnemy, 89 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, randomize, reset, setup
- **nocturne**: parent CEnemy, 81 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, reset, setup
- **bw1**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, reset, setup
- **blairwitch2**: parent CEnemy, 86 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getTargetPoints, process, processDamage, reset, setup

## CMoloch

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, dtor, getActorType, getPropertyList, isWeaponDrawn, process, renderOpaque, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, dtor, getActorType, isWeaponDrawn, process, renderOpaque, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection

## CMooCow

- **bw1**: parent CCharacter, no labelled table
- **bw3**: parent CCharacter, no labelled table

## CNPC

- **nocedit**: parent CCharacter, 85 slots; overrides archive, dtor, getActorType, getPathMap, getPropertyList, isInvulnerable, process, processDamage, renderBackground, setup
- **nocturne**: parent CCharacter, 78 slots; overrides archive, dtor, getActorType, getPathMap, isInvulnerable, process, processDamage, renderBackground, setup
- **bw1**: parent CCharacter, 80 slots; overrides archive, dtor, getActorType, getPathMap, isInvulnerable, process, processDamage, renderBackground, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CCharacter, 83 slots; overrides archive, dtor, getActorType, getPathMap, isInvulnerable, process, processDamage, renderBackground, renderOpaque, renderTransparent, setup
- **bw3**: parent CCharacter, 80 slots; overrides archive, dtor, getActorType, getPathMap, isInvulnerable, process, processDamage, renderBackground, renderOpaque, renderTransparent, setup

## CNecklace

- **blairwitch2**: parent CBoxActor, no labelled table

## CParticleBox

- **blairwitch2**: parent CBoxActor, no labelled table

## CPassenger

- **nocedit**: parent CNPC, 85 slots; overrides addFilesToExtract, archive, dtor, getActorType, getPropertyList, process, renderOpaque, setup
- **nocturne**: parent CNPC, 78 slots; overrides archive, dtor, getActorType, process, renderOpaque, setup
- **bw1**: parent CNPC, 80 slots; overrides archive, dtor, getActorType, process, renderOpaque, setup
- **blairwitch2**: parent CNPC, 83 slots; overrides archive, dtor, getActorType, process, renderOpaque, setup
- **bw3**: parent CNPC, 80 slots; overrides archive, dtor, getActorType, process, renderOpaque, setup

## CPatrolPoint

- **blairwitch2**: parent CWayPoint, no labelled table

## CPendulum

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, getPropertyList, process, processInEditor, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup

## CPlatform

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, getPropertyList, process, processInEditor, renderBackground, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides allowBulletHoles, archive, dtor, getActorType, getBlockVirtualDirectorFlag, getBoundingBox, getCollisionType, getGroundType, process, renderBackground, renderOpaque, setup

## CPrye

- **bw3**: parent CHero, no labelled table

## CPryeMorph

- **bw3**: parent CNPC, no labelled table

## CRifle

- **bw1**: parent CWeapon, no labelled table
- **bw3**: parent CWeapon, no labelled table

## CRobin

- **blairwitch2**: parent CBasicNPC, no labelled table

## CScat

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, createDefaultWeapon, drawWeapon, dtor, getActorType, getPropertyList, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, createDefaultWeapon, drawWeapon, dtor, getActorType, isWeaponDrawn, process, processDamage, renderOpaque, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection

## CSchnellGeist

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CSearchParty

- **blairwitch2**: parent CBasicNPC, no labelled table

## CSentinel

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, attractActorToward, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, attractActorToward, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, attractActorToward, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, attractActorToward, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, attractActorToward, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, setup

## CShadow

- **bw1**: parent CEnemy, no labelled table
- **blairwitch2**: parent CEnemy, no labelled table
- **bw3**: parent CEnemy, no labelled table

## CShadow_Forest

- **bw3**: parent CShadow, no labelled table

## CShadowsc

- **bw1**: parent CEnemy, no labelled table
- **bw3**: parent CEnemy, no labelled table

## CShotgun

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, onFired, process, renderAimBeam

## CShovel

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage, renderAimBeam
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, renderAimBeam
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, renderAimBeam
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, renderAimBeam
- **bw3**: parent CWeapon, 63 slots; overrides dtor, fire, getActorType, getDamage, renderAimBeam

## CSimBox

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CSimpleCross

- **blairwitch2**: parent CMelee, no labelled table

## CSkeleton_Demon

- **bw3**: parent CBoneGuy, no labelled table

## CSkeleton_Forest

- **bw3**: parent CBoneGuy, no labelled table

## CSkeleton_Indian

- **bw3**: parent CBoneGuy, no labelled table

## CSmiley

- **nocedit**: parent CEnemy, 89 slots; overrides addFilesToExtract, archive, attractActorToward, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, reset, setup
- **nocturne**: parent CEnemy, 81 slots; overrides archive, attractActorToward, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, reset, setup
- **bw1**: parent CEnemy, 83 slots; overrides archive, attractActorToward, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, reset, setup
- **blairwitch2**: parent CEnemy, 86 slots; overrides archive, attractActorToward, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, reset, setup

## CSpawner

- **bw3**: parent CDemonActor, no labelled table

## CSpike

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CSpiritBear

- **bw3**: parent CNPC, no labelled table

## CSpiritEagle

- **bw3**: parent CCharacter, no labelled table

## CSpiritIndian

- **bw3**: parent CNPC, no labelled table

## CSpiritMine

- **blairwitch2**: parent CBoxActor, no labelled table

## CSpiritShadow

- **bw3**: parent CShadow, no labelled table

## CSps

- **bw3**: parent CWeapon, no labelled table

## CStairs

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, getPropertyList, onActorDeleted, process, processInEditor, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, customGetFloorHeight, customIntersectCylinderXZ, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, process, renderOpaque, setup

## CSteuben

- **blairwitch2**: parent CBasicNPC, no labelled table

## CStorm

- **bw3**: parent CWeapon, no labelled table

## CStranger

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, drop, dropCarriedObject, dtor, getActorType, getCarryObjToBodyXForm, getDeathState, getGrabbed, getPropertyList, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, renderTransparent, reset, setPositionAndOrientation, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, drop, dropCarriedObject, dtor, getActorType, getCarryObjToBodyXForm, getDeathState, getGrabbed, isWeaponDrawn, process, processDamage, renderOpaque, renderTransparent, reset, setPositionAndOrientation, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, drop, dropCarriedObject, dtor, getActorType, getCarryObjToBodyXForm, getDeathState, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, renderTransparent, reset, setPositionAndOrientation, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, drop, dropCarriedObject, dtor, getActorType, getCarryObjToBodyXForm, getDeathState, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, renderTransparent, reset, setPositionAndOrientation, setup, testCylinderCollision, testLineIntersection

## CStyler

- **bw3**: parent CEnemy, no labelled table

## CStylerDemon

- **bw3**: parent CEnemy, no labelled table

## CSuccubus

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getCollisionType, getPropertyList, getTargetPoints, process, processDamage, renderOpaque, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCollisionType, getTargetPoints, process, processDamage, renderOpaque, setup

## CSvetlana

- **nocedit**: parent CHero, 89 slots; overrides addFilesToExtract, archive, drawWeapon, dtor, getActorType, getGrabbed, getPropertyList, isWeaponDrawn, onActorDeleted, process, processDamage, renderOpaque, setup
- **nocturne**: parent CHero, 82 slots; overrides archive, drawWeapon, dtor, getActorType, getGrabbed, isWeaponDrawn, process, processDamage, renderOpaque, setup
- **bw1**: parent CHero, 88 slots; overrides <new slot 84>, <new slot 85>, <new slot 86>, <new slot 87>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection
- **blairwitch2**: parent CHero, 92 slots; overrides <new slot 87>, <new slot 88>, <new slot 89>, <new slot 90>, <new slot 91>, archive, canBeGrabbed, canLookAt, createDefaultWeapon, drawWeapon, dtor, getActorType, getGrabbed, getPathMap, isGrabbable, isInvulnerable, isWeaponDrawn, kill, process, processDamage, releaseFromGrab, renderOpaque, reset, setup, testCylinderCollision, testLineIntersection

## CTVBat

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, getPropertyList, getTargetPoints, process, processDamage, processInEditor, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getDeathState, getTargetPoints, isGrabbable, process, processDamage, renderOpaque, setup

## CTawiscara

- **bw3**: parent CEnemy, no labelled table

## CTeleport

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, onActorDeleted, process, processInEditor, renderOpaque, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process

## CTeleportDest

- **nocedit**: parent CDemonActor, 59 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType, processInEditor, renderOpaque, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType
- **bw1**: parent CDemonActor, 54 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType
- **blairwitch2**: parent CDemonActor, 56 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType
- **bw3**: parent CDemonActor, 54 slots; overrides dtor, getActorType, getBoundingBox, getCollisionType

## CTempleStone

- **nocedit**: parent CBoxActor, 59 slots; overrides archive, canPickup, dtor, getActorType, getPropertyList
- **nocturne**: parent CBoxActor, 52 slots; overrides archive, canPickup, dtor, getActorType
- **bw1**: parent CBoxActor, 54 slots; overrides archive, canPickup, dtor, getActorType
- **blairwitch2**: parent CBoxActor, 56 slots; overrides archive, canPickup, dtor, getActorType
- **bw3**: parent CBoxActor, 54 slots; overrides archive, canPickup, dtor, getActorType

## CTentacle

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, attractActorToward, dtor, getActorType, getPropertyList, process, renderOpaque, setup, shouldIgnoreForTargeting
- **nocturne**: parent CEnemy, 80 slots; overrides archive, attractActorToward, dtor, getActorType, process, renderOpaque, setup, shouldIgnoreForTargeting
- **bw1**: parent CEnemy, 82 slots; overrides archive, attractActorToward, dtor, getActorType, process, renderOpaque, setup, shouldIgnoreForTargeting
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, attractActorToward, dtor, getActorType, process, renderOpaque, setup, shouldIgnoreForTargeting

## CTheHand

- **bw1**: parent CEnemy, no labelled table
- **bw3**: parent CEnemy, no labelled table

## CTommyGun

- **nocedit**: parent CWeapon, 67 slots; overrides dtor, fire, getActorType, getDamage, process, setWeaponState
- **nocturne**: parent CWeapon, 60 slots; overrides dtor, fire, getActorType, getDamage, process, setWeaponState
- **bw1**: parent CWeapon, 62 slots; overrides dtor, fire, getActorType, getDamage, process, setWeaponState
- **blairwitch2**: parent CWeapon, 64 slots; overrides dtor, fire, getActorType, getDamage, process, setWeaponState
- **bw3**: parent CWeapon, 63 slots; overrides dtor, fire, getActorType, getDamage, process, setWeaponState

## CTrap

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, getPropertyList, onDropped, pickup, process, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, canPickup, dtor, getActorType, getBoundingBox, getCarrier, getCollisionType, onDropped, pickup, process, renderOpaque, setup

## CTrash

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderOpaque, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderOpaque, setup

## CTrigger

- **nocedit**: parent CDemonActor, 59 slots; overrides archive, dtor, evaluateTriggerCondition, getActorType, getBoundingBox, getCollisionType, getPropertyList, getTargetPoints, onLaserHit, process, processActionButton, processInEditor, renderTransparent, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, evaluateTriggerCondition, getActorType, getBoundingBox, getCollisionType, getTargetPoints, onLaserHit, process, processActionButton, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, evaluateTriggerCondition, getActorType, getBoundingBox, getCollisionType, getTargetPoints, onLaserHit, process, processActionButton, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, evaluateTriggerCondition, getActorType, getBoundingBox, getCollisionType, getTargetPoints, onLaserHit, process, processActionButton, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, dtor, evaluateTriggerCondition, getActorType, getBoundingBox, getCollisionType, getTargetPoints, onLaserHit, process, processActionButton, renderTransparent, setup

## CTurret

- **nocedit**: parent CWeapon, 67 slots; overrides archive, canPickup, dtor, fire, getActorType, getBoundingBox, getDamage, getInteractionInfo, getMuzzlePoint, getPropertyList, process, processInEditor, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction
- **nocturne**: parent CWeapon, 60 slots; overrides archive, canPickup, dtor, fire, getActorType, getBoundingBox, getDamage, getInteractionInfo, getMuzzlePoint, process, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction
- **bw1**: parent CWeapon, 62 slots; overrides archive, canPickup, dtor, fire, getActorType, getBoundingBox, getDamage, getInteractionInfo, getMuzzlePoint, process, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction
- **blairwitch2**: parent CWeapon, 64 slots; overrides archive, canPickup, dtor, fire, getActorType, getBoundingBox, getDamage, getInteractionInfo, getMuzzlePoint, process, renderOpaque, setup, startInteraction, stopInteraction, updateInteraction

## CTwigZombie

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CUnion

- **blairwitch2**: parent CBasicNPC, no labelled table

## CUnionZombie

- **blairwitch2**: parent CBasicEnemy, no labelled table

## CVampireBoss

- **nocedit**: parent CEnemy, 88 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getDeathState, getPropertyList, getTargetPoints, process, processDamage, renderOpaque, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getCarryObjToBodyXForm, getCollisionType, getDeathState, getTargetPoints, process, processDamage, renderOpaque, setup

## CVehicle

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, dtor, getActorType, getBoundingBox, getCollisionType, getPropertyList, process, processInEditor, renderBackground, renderOpaque, renderTransparent, setup
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, dtor, getActorType, getBoundingBox, getCollisionType, process, renderBackground, renderOpaque, renderTransparent, setup

## CWaterActor

- **nocedit**: parent CDemonActor, 59 slots; overrides addFilesToExtract, archive, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, getPropertyList, onLaserHit, process, processInEditor, renderTransparent, setup, showEditorHelp
- **nocturne**: parent CDemonActor, 52 slots; overrides archive, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderTransparent, setup
- **bw1**: parent CDemonActor, 54 slots; overrides archive, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderTransparent, setup
- **blairwitch2**: parent CDemonActor, 56 slots; overrides archive, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderTransparent, setup
- **bw3**: parent CDemonActor, 54 slots; overrides archive, customRayIntersect, dtor, getActorType, getBoundingBox, getCollisionType, getGroundType, onLaserHit, process, renderTransparent, setup

## CWayPoint

- **nocedit**: parent CTrigger, 59 slots; overrides archive, dtor, getActorType, getPropertyList, onActorDeleted, processInEditor, renderOpaque, setup, showEditorHelp
- **nocturne**: parent CTrigger, 52 slots; overrides archive, dtor, getActorType, renderOpaque, setup
- **bw1**: parent CTrigger, 54 slots; overrides archive, dtor, getActorType, renderOpaque, setup
- **blairwitch2**: parent CTrigger, 56 slots; overrides archive, dtor, getActorType, renderOpaque, setup
- **bw3**: parent CTrigger, 54 slots; overrides archive, dtor, getActorType, renderOpaque, setup

## CWeapon

- **nocedit**: parent CDemonActor, 67 slots; overrides addFilesToExtract, archive, canPickup, dtor, fire, getBoundingBox, getCarrier, getCollisionType, getDamage, getMuzzlePoint, getPropertyList, isReadyToFire, onDropped, onFired, onPickup, pickup, process, renderAimBeam, renderOpaque, setWeaponState, setup, updateLighting
- **nocturne**: parent CDemonActor, 60 slots; overrides archive, canPickup, dtor, fire, getBoundingBox, getCarrier, getCollisionType, getDamage, getMuzzlePoint, isReadyToFire, onDropped, onFired, onPickup, pickup, process, renderAimBeam, renderOpaque, setWeaponState, setup, updateLighting
- **bw1**: parent CDemonActor, 62 slots; overrides archive, canPickup, dtor, fire, getBoundingBox, getCarrier, getCollisionType, getDamage, getMuzzlePoint, isReadyToFire, onDropped, onFired, onPickup, pickup, process, renderAimBeam, renderOpaque, setWeaponState, setup, updateLighting
- **blairwitch2**: parent CDemonActor, 64 slots; overrides archive, canPickup, dtor, fire, getBoundingBox, getCarrier, getCollisionType, getDamage, getMuzzlePoint, isReadyToFire, onDropped, onFired, onPickup, pickup, process, renderAimBeam, renderOpaque, setWeaponState, setup, updateLighting
- **bw3**: parent CDemonActor, 63 slots; overrides <new slot 62>, archive, canPickup, dtor, fire, getBoundingBox, getCarrier, getCollisionType, getDamage, getMuzzlePoint, isReadyToFire, onDropped, onFired, onPickup, pickup, process, renderAimBeam, renderOpaque, renderTransparent, setWeaponState, setup, updateLighting

## CWerewolf

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getDeathState, getPropertyList, getTargetPoints, process, processDamage, randomize, renderTransparent, setWalkTarget, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getDeathState, getTargetPoints, process, processDamage, renderTransparent, setWalkTarget, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getDeathState, getTargetPoints, process, processDamage, renderTransparent, setWalkTarget, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getDeathState, getTargetPoints, process, processDamage, renderTransparent, setWalkTarget, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getDeathState, getTargetPoints, process, processDamage, renderTransparent, setWalkTarget, setup

## CWhitewolf

- **bw3**: parent CDarkwolf, no labelled table

## CYow

- **bw1**: parent CEnemy, no labelled table
- **bw3**: parent CEnemy, no labelled table

## CZombie

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, canBeAttracted, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getPropertyList, getTargetPoints, isGrabbable, process, processDamage, randomize, renderOpaque, renderTransparent, setup, shouldIgnoreForTargeting
- **nocturne**: parent CEnemy, 80 slots; overrides archive, canBeAttracted, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getTargetPoints, isGrabbable, process, processDamage, renderOpaque, renderTransparent, setup, shouldIgnoreForTargeting
- **bw1**: parent CEnemy, 82 slots; overrides archive, canBeAttracted, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getTargetPoints, isGrabbable, process, processDamage, renderOpaque, renderTransparent, setup, shouldIgnoreForTargeting
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, canBeAttracted, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getTargetPoints, isGrabbable, process, processDamage, renderOpaque, renderTransparent, setup, shouldIgnoreForTargeting
- **bw3**: parent CEnemy, 83 slots; overrides archive, canBeAttracted, canBeGrabbed, dtor, getActorType, getCarryObjToBodyXForm, getGrabbed, getTargetPoints, isGrabbable, isInvulnerable, process, processDamage, renderOpaque, renderTransparent, setup, shouldIgnoreForTargeting

## CZombieCow

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getPropertyList, getTargetPoints, process, processDamage, randomize, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup

## CZombieDog

- **nocedit**: parent CEnemy, 88 slots; overrides addFilesToExtract, archive, dtor, getActorType, getPropertyList, getTargetPoints, process, processDamage, randomize, setup
- **nocturne**: parent CEnemy, 80 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **bw1**: parent CEnemy, 82 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **blairwitch2**: parent CEnemy, 85 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup
- **bw3**: parent CEnemy, 83 slots; overrides archive, dtor, getActorType, getTargetPoints, process, processDamage, setup

## CZombiePriest

- **bw3**: parent CEnemy, no labelled table

## CZombie_Cemetery

- **bw3**: parent CZombie, no labelled table

## CZombie_Demon

- **bw3**: parent CZombie, no labelled table

## CZombie_Forest

- **bw3**: parent CZombie, no labelled table

## CZombie_Indian

- **bw3**: parent CZombie, no labelled table

## CZombie_Spirit

- **bw3**: parent CZombie, no labelled table
