; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_memset_FUN_005a28f0(void *dest,int value,ulong count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; int              Stack[0x8]:4   value
; ulong            Stack[0xc]:4   count
;
; XREF[126]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00468b60 at 00468bdc
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_004694f0 at 0046959a
;   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0050f170 at 0050f183
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0050f190 at 0050f1a6
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005105e0 at 00510607
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ad40 at 0040adb7
;   core_actor.cpp_copyToActorDebugBuffer_FUN_0040acf0 at 0040acfe
;   core_bodypart.cpp_CBodyPart_addTexture_FUN_00416890 at 00416918
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 at 00415bde
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 at 004174df
;   ... and 116 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a7100
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a28f0
        ;   Label: crt_memory.c_memset_FUN_005a28f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a28f4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a28f8
    PUSH EAX                            ; 005a28fc
    MOV DH,DL                           ; 005a28fd
    SHL EDX,0x8                         ; 005a28ff
    MOV DL,DH                           ; 005a2902
    SHL EDX,0x8                         ; 005a2904
    MOV DL,DH                           ; 005a2907
    CALL crt_unknown.c_FUN_005a7100     ; 005a2909
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7100()
    POP EAX                             ; 005a290e
    RET                                 ; 005a290f

