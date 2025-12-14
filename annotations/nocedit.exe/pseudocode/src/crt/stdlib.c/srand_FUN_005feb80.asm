; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdlib.c_srand_FUN_005feb80(uint seed)
;
; Parameters:
; uint             Stack[0x4]:4   seed
;
; XREF[4]:
;   core_netgame.cpp_FUN_00541390 at 0054198b
;   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 at 004453c4
;   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 at 0044583f
;   wincore_winrun.cpp_winMain_FUN_005f3680 at 005f36fe
;
; Called Functions:
;   crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
;
; *****************************************************************************

section .text

    CALL crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50 ; 005feb80
        ;   XREF to: 005feb50 (UNCONDITIONAL_CALL)  ; uint * crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50()
        ;   Label: crt_stdlib.c_srand_FUN_005feb80
    TEST EAX,EAX                        ; 005feb85
    JZ 0x005feb8f                       ; 005feb87
        ;   XREF to: 005feb8f (CONDITIONAL_JUMP)  ; LAB_005feb8f
    MOV EDX,dword ptr [ESP + 0x4]       ; 005feb89
    MOV dword ptr [EAX],EDX             ; 005feb8d
    RET                                 ; 005feb8f
        ;   Label: LAB_005feb8f

