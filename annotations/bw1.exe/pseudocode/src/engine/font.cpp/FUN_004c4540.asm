; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_font_cpp_FUN_004c4540(int param_1,int param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0049d580 at 0049d5ed
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004c4540
        ;   Label: engine_font.cpp_FUN_004c4540
    TEST EAX,EAX                        ; 004c4544
    JL 0x004c454f                       ; 004c4546
        ;   XREF to: 004c454f (CONDITIONAL_JUMP)  ; LAB_004c454f
    CMP EAX,0x100                       ; 004c4548
    JL 0x004c4552                       ; 004c454d
        ;   XREF to: 004c4552 (CONDITIONAL_JUMP)  ; LAB_004c4552
    XOR EAX,EAX                         ; 004c454f
        ;   Label: LAB_004c454f
    RET                                 ; 004c4551
    MOV EDX,dword ptr [ESP + 0x4]       ; 004c4552
        ;   Label: LAB_004c4552
    SHL EAX,0x2                         ; 004c4556
    ADD EAX,EDX                         ; 004c4559
    MOV EAX,dword ptr [EAX + 0x3de8]    ; 004c455b
    RET                                 ; 004c4561

