; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_memset_FUN_00563cc0(void *dest,int value,ulong count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; int              Stack[0x8]:4   value
; ulong            Stack[0xc]:4   count
;
; XREF[96]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730 at 0045c7ac
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110 at 0045d1ba
;   cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5290 at 004f52b7
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_004f3e90 at 004f3ea3
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_004f3eb0 at 004f3ec6
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040bd90 at 0040be07
;   core_actor.cpp_copyToActorDebugBuffer_FUN_0040bd40 at 0040bd4e
;   core_baron.cpp_CBaron_attachToOwner_FUN_00410a80 at 00410b58
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90 at 00417d18
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 004170ee
;   ... and 86 more
;
; Called Functions:
;   crt_unknown.c_FUN_0056a0c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00563cc0
        ;   Label: crt_memory.c_memset_FUN_00563cc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563cc4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00563cc8
    PUSH EAX                            ; 00563ccc
    MOV DH,DL                           ; 00563ccd
    SHL EDX,0x8                         ; 00563ccf
    MOV DL,DH                           ; 00563cd2
    SHL EDX,0x8                         ; 00563cd4
    MOV DL,DH                           ; 00563cd7
    CALL crt_unknown.c_FUN_0056a0c0     ; 00563cd9
        ;   XREF to: 0056a0c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a0c0()
    POP EAX                             ; 00563cde
    RET                                 ; 00563cdf

