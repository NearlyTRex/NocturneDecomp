; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * engine_special_cpp_FUN_005667e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02cf5fd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005667e0
        ;   Label: engine_special.cpp_FUN_005667e0
    MOV EAX,[0x02cf5fd0]                ; 005667e4 | DAT_02cf5fd0
    MOV dword ptr [EDX],EAX             ; 005667e9
    MOV EAX,0x606730                    ; 005667eb
    RET                                 ; 005667f0

