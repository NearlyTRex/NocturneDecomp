; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown uint crt_unknown_c_SomethingFPUControlWord_FUN_0060e8e0(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 at 0060d0bd
;
; Referenced Globals:
;   byte BYTE_00684acc = 0x0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060e8e0
        ;   Label: crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0
    PUSH EDI                            ; 0060e8e1
    SUB ESP,0x4                         ; 0060e8e2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0060e8e5
    XOR EDX,EDX                         ; 0060e8e9
    MOV AH,byte ptr [0x00684acc]        ; 0060e8eb | BYTE_00684acc
    MOV dword ptr [ESP],EDX             ; 0060e8f1
    TEST AH,AH                          ; 0060e8f4
    JZ 0x0060e922                       ; 0060e8f6
        ;   XREF to: 0060e922 (CONDITIONAL_JUMP)  ; LAB_0060e922
    MOV EDI,ESP                         ; 0060e8f8
    FNSTCW word ptr SS:[EDI]            ; 0060e8fa
    WAIT                                ; 0060e8fd
    TEST EBX,EBX                        ; 0060e8fe
    JZ 0x0060e922                       ; 0060e900
        ;   XREF to: 0060e922 (CONDITIONAL_JUMP)  ; LAB_0060e922
    MOV ECX,dword ptr [ESP]             ; 0060e902
    MOV EAX,EBX                         ; 0060e905
    MOV EDI,dword ptr [ESP + 0x10]      ; 0060e907
    NOT EAX                             ; 0060e90b
    AND EDI,EBX                         ; 0060e90d
    AND EAX,ECX                         ; 0060e90f
    OR EAX,EDI                          ; 0060e911
    MOV EDI,ESP                         ; 0060e913
    MOV dword ptr [ESP],EAX             ; 0060e915
    FLDCW word ptr SS:[EDI]             ; 0060e918
    WAIT                                ; 0060e91b
    MOV EDI,ESP                         ; 0060e91c
    FNSTCW word ptr SS:[EDI]            ; 0060e91e
    WAIT                                ; 0060e921
    XOR EAX,EAX                         ; 0060e922
        ;   Label: LAB_0060e922
    MOV AX,word ptr [ESP]               ; 0060e924
    ADD ESP,0x4                         ; 0060e928
    POP EDI                             ; 0060e92b
    POP EBX                             ; 0060e92c
    RET                                 ; 0060e92d

