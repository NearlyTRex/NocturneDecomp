; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00582a80(int slot)
;
; Parameters:
; int              Stack[0x4]:4   slot
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0 at 0044d9df
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 at 0044d6e5
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c83408
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582a80 | DAT_01c50948
        ;   Label: engine_special.cpp_FUN_00582a80
    JNZ 0x00582a8c                      ; 00582a87
        ;   XREF to: 00582a8c (CONDITIONAL_JUMP)  ; LAB_00582a8c
    XOR EAX,EAX                         ; 00582a89
    RET                                 ; 00582a8b
    MOV ECX,dword ptr [ESP + 0x4]       ; 00582a8c
        ;   Label: LAB_00582a8c
    PUSH ECX                            ; 00582a90
    CALL dword ptr [0x02c83408]         ; 00582a91 | DAT_02c83408
    ADD ESP,0x4                         ; 00582a97
    RET                                 ; 00582a9a

