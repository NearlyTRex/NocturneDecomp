; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setFogColor_FUN_005661b0(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00450980 at 00450a2d
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004503f0 at 0045043a
;   engine_2d.c_setSolidColor_FUN_004033f0 at 00403468
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6048
;   undefined4 DAT_02cf6110
;   undefined4 DAT_02cf6114
;   undefined4 DAT_02cf6118
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005661b0
        ;   Label: engine_special.cpp_setFogColor_FUN_005661b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005661b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005661b5
    MOV ECX,dword ptr [ESP + 0x10]      ; 005661b9
    MOV EBX,dword ptr [0x01c6cee8]      ; 005661bd | DAT_01c6cee8
    MOV dword ptr [0x02cf6114],EDX      ; 005661c3 | DAT_02cf6114
    MOV dword ptr [0x02cf6118],ECX      ; 005661c9 | DAT_02cf6118
    MOV [0x02cf6110],EAX                ; 005661cf | DAT_02cf6110
    TEST EBX,EBX                        ; 005661d4
    JNZ 0x005661dc                      ; 005661d6
        ;   XREF to: 005661dc (CONDITIONAL_JUMP)  ; LAB_005661dc
    XOR EAX,EAX                         ; 005661d8
    POP EBX                             ; 005661da
    RET                                 ; 005661db
    PUSH ECX                            ; 005661dc
        ;   Label: LAB_005661dc
    PUSH EDX                            ; 005661dd
    PUSH EAX                            ; 005661de
    CALL dword ptr [0x02cf6048]         ; 005661df | DAT_02cf6048
    ADD ESP,0xc                         ; 005661e5
    POP EBX                             ; 005661e8
    RET                                 ; 005661e9

