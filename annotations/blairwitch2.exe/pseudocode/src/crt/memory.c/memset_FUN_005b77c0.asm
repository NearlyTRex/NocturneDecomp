; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_memset_FUN_005b77c0(void *dest,int value,ulong count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; int              Stack[0x8]:4   value
; ulong            Stack[0xc]:4   count
;
; XREF[132]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90 at 0046700c
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00467920 at 004679ca
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00516140 at 00516153
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_00516160 at 00516176
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005175b0 at 005175d7
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040adf0 at 0040ae67
;   core_actor.cpp_copyToActorDebugBuffer_FUN_0040ada0 at 0040adae
;   core_baron.cpp_CBaron_attachToOwner_FUN_0040fef0 at 0040ffe8
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_004177e0 at 00417868
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 00416b1e
;   ... and 122 more
;
; Called Functions:
;   crt_unknown.c_FUN_005bbfc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b77c0
        ;   Label: crt_memory.c_memset_FUN_005b77c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b77c4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b77c8
    PUSH EAX                            ; 005b77cc
    MOV DH,DL                           ; 005b77cd
    SHL EDX,0x8                         ; 005b77cf
    MOV DL,DH                           ; 005b77d2
    SHL EDX,0x8                         ; 005b77d4
    MOV DL,DH                           ; 005b77d7
    CALL crt_unknown.c_FUN_005bbfc0     ; 005b77d9
        ;   XREF to: 005bbfc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bbfc0()
    POP EAX                             ; 005b77de
    RET                                 ; 005b77df

