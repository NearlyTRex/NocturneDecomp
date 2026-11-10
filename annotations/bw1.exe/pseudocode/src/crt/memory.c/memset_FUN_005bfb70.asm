; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_memset_FUN_005bfb70(void *dest,int value,ulong count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; int              Stack[0x8]:4   value
; ulong            Stack[0xc]:4   count
;
; XREF[133]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0047f4a0 at 0047f51c
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0047fe30 at 0047feda
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_00537490 at 005374a3
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_005374b0 at 005374c6
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ab00 at 0040ab77
;   core_actor.cpp_copyToActorDebugBuffer_FUN_0040aab0 at 0040aabe
;   core_baron.cpp_CBaron_attachToOwner_FUN_0040fa70 at 0040fb68
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_0041ac60 at 0041ace8
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 at 00419fae
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750 at 0041b82f
;   ... and 123 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c4290
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005bfb70
        ;   Label: crt_memory.c_memset_FUN_005bfb70
    MOV EDX,dword ptr [ESP + 0x8]       ; 005bfb74
    MOV ECX,dword ptr [ESP + 0xc]       ; 005bfb78
    PUSH EAX                            ; 005bfb7c
    MOV DH,DL                           ; 005bfb7d
    SHL EDX,0x8                         ; 005bfb7f
    MOV DL,DH                           ; 005bfb82
    SHL EDX,0x8                         ; 005bfb84
    MOV DL,DH                           ; 005bfb87
    CALL crt_unknown.c_FUN_005c4290     ; 005bfb89
        ;   XREF to: 005c4290 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4290()
    POP EAX                             ; 005bfb8e
    RET                                 ; 005bfb8f

