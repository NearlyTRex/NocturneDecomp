; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_memset_FUN_005fde40(void *dest,int value,ulong count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; int              Stack[0x8]:4   value
; ulong            Stack[0xc]:4   count
;
; XREF[133]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 at 0048818c
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0 at 00488b7a
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820 at 0054a833
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840 at 0054a856
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0 at 0054bcf7
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 at 0040ad90
;   core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30 at 0040ac3e
;   core_baron.cpp_CBaron_attachToOwner_FUN_00413470 at 00413548
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_0041af90 at 0041b018
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 at 0041a3fe
;   ... and 123 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005fde40
        ;   Label: crt_memory.c_memset_FUN_005fde40
    MOV EDX,dword ptr [ESP + 0x8]       ; 005fde44
    MOV ECX,dword ptr [ESP + 0xc]       ; 005fde48
    PUSH EAX                            ; 005fde4c
    MOV DH,DL                           ; 005fde4d
    SHL EDX,0x8                         ; 005fde4f
    MOV DL,DH                           ; 005fde52
    SHL EDX,0x8                         ; 005fde54
    MOV DL,DH                           ; 005fde57
    CALL 0x00603b00                     ; 005fde59
        ;   XREF to: 00603b00 (UNCONDITIONAL_CALL)  ; LAB_00603afe+2
    POP EAX                             ; 005fde5e
    RET                                 ; 005fde5f

