; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_doc_cpp_FUN_0044fe40(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   core_doc.cpp_CDoc_makeDrawDecision_FUN_004555c0 at 00455a0f
;
; Referenced Globals:
;   undefined4 DAT_005cfb6f
;   undefined4 DAT_005cfb77
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0044fe40
        ;   Label: core_doc.cpp_FUN_0044fe40
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044fe43
    TEST EAX,EAX                        ; 0044fe47
    JLE 0x0044fe64                      ; 0044fe49
        ;   XREF to: 0044fe64 (CONDITIONAL_JUMP)  ; LAB_0044fe64
    CMP EAX,0x1                         ; 0044fe4b
    JNZ 0x0044fe70                      ; 0044fe4e
        ;   XREF to: 0044fe70 (CONDITIONAL_JUMP)  ; LAB_0044fe70
    FLD float ptr [ESP + 0x10]          ; 0044fe50
    FMUL double ptr [0x005cfb6f]        ; 0044fe54 | DAT_005cfb6f
    FSTP float ptr [ESP]                ; 0044fe5a
        ;   Label: LAB_0044fe5a
    MOV EAX,dword ptr [ESP]             ; 0044fe5d
    ADD ESP,0x4                         ; 0044fe60
    RET                                 ; 0044fe63
    FLD float ptr [ESP + 0x10]          ; 0044fe64
        ;   Label: LAB_0044fe64
    FMUL double ptr [0x005cfb77]        ; 0044fe68 | DAT_005cfb77
    JMP 0x0044fe5a                      ; 0044fe6e
        ;   XREF to: 0044fe5a (UNCONDITIONAL_JUMP)  ; LAB_0044fe5a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044fe70
        ;   Label: LAB_0044fe70
    MOV dword ptr [ESP],EAX             ; 0044fe74
    MOV EAX,dword ptr [ESP]             ; 0044fe77
    ADD ESP,0x4                         ; 0044fe7a
    RET                                 ; 0044fe7d

