; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 engine_keys_cpp_CKeys_getKeyState_FUN_004c4180(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c02598
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004c4180
        ;   Label: engine_keys.cpp_CKeys_getKeyState_FUN_004c4180
    XOR EAX,EAX                         ; 004c4184
    MOV AL,byte ptr [EDX + 0x1c02598]   ; 004c4186 | DAT_01c02598
    RET                                 ; 004c418c

