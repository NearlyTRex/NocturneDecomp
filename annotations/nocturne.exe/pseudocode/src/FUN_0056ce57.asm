; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056ce57(_FILE *param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00571cc6 at 00571cd4
;   crt_fstream.cpp_istream_seekg_FUN_00565f14 at 00565f1c
;   crt_stdio.c_fgetc_buffered_FUN_00571c60 at 00571c69
;
; Called Functions:
;   crt_stdio.c_stream_setup_FUN_0056b227
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056ce57
        ;   Label: FUN_0056ce57
    CMP dword ptr [ESP + 0x8],0x0       ; 0056ce5b
    JZ 0x0056ce81                       ; 0056ce60
        ;   XREF to: 0056ce81 (CONDITIONAL_JUMP)  ; LAB_0056ce81
    MOV EDX,dword ptr [EAX]             ; 0056ce62
        ;   Label: LAB_0056ce62
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056ce64
    CMP dword ptr [EDX + EAX*0x1 + 0x10],0x0 ; 0056ce67
    JNZ 0x0056ce8f                      ; 0056ce6c
        ;   XREF to: 0056ce8f (CONDITIONAL_JUMP)  ; LAB_0056ce8f
    MOV EDX,dword ptr [EAX]             ; 0056ce6e
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056ce70
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8] ; 0056ce73
    TEST EDX,EDX                        ; 0056ce77
    JNZ 0x0056ce8f                      ; 0056ce79
        ;   XREF to: 0056ce8f (CONDITIONAL_JUMP)  ; LAB_0056ce8f
    MOV EAX,0x1                         ; 0056ce7b
    RET                                 ; 0056ce80
    MOV EDX,dword ptr [EAX]             ; 0056ce81
        ;   Label: LAB_0056ce81
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056ce83
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0xc] ; 0056ce86
    TEST DL,0x1                         ; 0056ce8a
    JZ 0x0056ce62                       ; 0056ce8d
        ;   XREF to: 0056ce62 (CONDITIONAL_JUMP)  ; LAB_0056ce62
    PUSH EBX                            ; 0056ce8f
        ;   Label: LAB_0056ce8f
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056ce90
    PUSH EBX                            ; 0056ce94
    PUSH EAX                            ; 0056ce95
    CALL crt_stdio.c_stream_setup_FUN_0056b227 ; 0056ce96
        ;   XREF to: 0056b227 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_stream_setup_FUN_0056b227(_FILE * stream, int operation_type)
    ADD ESP,0x8                         ; 0056ce9b
    POP EBX                             ; 0056ce9e
    RET                                 ; 0056ce9f

