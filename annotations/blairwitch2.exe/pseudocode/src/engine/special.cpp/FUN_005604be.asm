; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * engine_special_cpp_FUN_005604be(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0264bba4
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005604be
        ;   Label: engine_special.cpp_FUN_005604be
    MOV EDX,dword ptr [ESP + 0x4]       ; 005604c0
    MOV EAX,[0x0264bba4]                ; 005604c4 | DAT_0264bba4
    MOV dword ptr [EDX],EAX             ; 005604c9
    MOV EAX,0x61e180                    ; 005604cb
    RET                                 ; 005604d0

