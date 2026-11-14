; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_masterZBuffer_FUN_00560030(int slot)
;
; Parameters:
; int              Stack[0x4]:4   slot
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200 at 0043c31f
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 at 0043c025
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc38
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 00560030 | DAT_01c37788
        ;   Label: engine_special.cpp_masterZBuffer_FUN_00560030
    JNZ 0x0056003c                      ; 00560037
        ;   XREF to: 0056003c (CONDITIONAL_JUMP)  ; LAB_0056003c
    XOR EAX,EAX                         ; 00560039
    RET                                 ; 0056003b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056003c
        ;   Label: LAB_0056003c
    PUSH ECX                            ; 00560040
    CALL dword ptr [0x0264bc38]         ; 00560041 | DAT_0264bc38
    ADD ESP,0x4                         ; 00560047
    RET                                 ; 0056004a

