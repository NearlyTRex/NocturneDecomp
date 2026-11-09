; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0056655e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_02cf6094
;   undefined4 DAT_02cf6128
;   undefined4 DAT_02cf6130
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0056655e
        ;   Label: engine_special.cpp_FUN_0056655e
    CMP dword ptr [0x02cf6094],0x0      ; 00566560 | DAT_02cf6094
    JNZ 0x0056656c                      ; 00566567
        ;   XREF to: 0056656c (CONDITIONAL_JUMP)  ; LAB_0056656c
    XOR EAX,EAX                         ; 00566569
    RET                                 ; 0056656b
        ;   Label: LAB_0056656b
    CALL dword ptr [0x02cf6094]         ; 0056656c | DAT_02cf6094
        ;   Label: LAB_0056656c
    TEST EAX,EAX                        ; 00566572
    JZ 0x0056656b                       ; 00566574
        ;   XREF to: 0056656b (CONDITIONAL_JUMP)  ; LAB_0056656b
    MOV EAX,[0x005fba20]                ; 00566576 | DAT_005fba20
    MOV [0x02cf6128],EAX                ; 0056657b | DAT_02cf6128
    MOV EAX,[0x02cf6130]                ; 00566580 | DAT_02cf6130
    MOV [0x005fba20],EAX                ; 00566585 | DAT_005fba20
    MOV EAX,0x1                         ; 0056658a
    RET                                 ; 0056658f

