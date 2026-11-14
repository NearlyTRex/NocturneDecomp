; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0045dbf0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00450c60 at 00451ae0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045dbf0
        ;   Label: core_doc.cpp_FUN_0045dbf0
    MOV EDX,dword ptr [EAX + 0x25698]   ; 0045dbf4
    TEST EDX,EDX                        ; 0045dbfa
    JNZ 0x0045dbff                      ; 0045dbfc
        ;   XREF to: 0045dbff (CONDITIONAL_JUMP)  ; LAB_0045dbff
    RET                                 ; 0045dbfe
    MOV EAX,EDX                         ; 0045dbff
        ;   Label: LAB_0045dbff
    PUSH dword ptr [ESP + 0x8]          ; 0045dc01
    PUSH EAX                            ; 0045dc05
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0045dc06
    CALL dword ptr [EDX + 0x14]         ; 0045dc0c
    ADD ESP,0x8                         ; 0045dc0f
    RET                                 ; 0045dc12

