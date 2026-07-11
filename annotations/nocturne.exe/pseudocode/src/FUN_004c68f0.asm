; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c68f0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004b52f0 at 004b53f5
;
; Called Functions:
;   FUN_0040a290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c68f0
        ;   Label: FUN_004c68f0
    PUSH ESI                            ; 004c68f1
    PUSH EDI                            ; 004c68f2
    PUSH EBP                            ; 004c68f3
    MOV EBP,ESP                         ; 004c68f4
    SUB ESP,0xc                         ; 004c68f6
    AND ESP,0xfffffff8                  ; 004c68f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c68fc
    CMP dword ptr [EBX + 0x804],0x2     ; 004c68ff
    JNZ 0x004c6914                      ; 004c6906
        ;   XREF to: 004c6914 (CONDITIONAL_JUMP)  ; LAB_004c6914
    MOV EAX,0x1                         ; 004c6908
        ;   Label: LAB_004c6908
    MOV ESP,EBP                         ; 004c690d
    POP EBP                             ; 004c690f
    POP EDI                             ; 004c6910
    POP ESI                             ; 004c6911
    POP EBX                             ; 004c6912
    RET                                 ; 004c6913
    MOV ECX,dword ptr [EBP + 0x18]      ; 004c6914
        ;   Label: LAB_004c6914
    PUSH ECX                            ; 004c6917
    LEA EAX,[ESP + 0x4]                 ; 004c6918
    PUSH EAX                            ; 004c691c
    PUSH EBX                            ; 004c691d
    CALL FUN_0040a290                   ; 004c691e
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    MOV ESI,dword ptr [EBX + 0x804]     ; 004c6923
    ADD ESP,0xc                         ; 004c6929
    TEST ESI,ESI                        ; 004c692c
    JNZ 0x004c693d                      ; 004c692e
        ;   XREF to: 004c693d (CONDITIONAL_JUMP)  ; LAB_004c693d
    FLD float ptr [ESP + 0x8]           ; 004c6930
    FLDZ                                ; 004c6934
    FCOMPP                              ; 004c6936
    FNSTSW AX                           ; 004c6938
    SAHF                                ; 004c693a
    JC 0x004c6908                       ; 004c693b
        ;   XREF to: 004c6908 (CONDITIONAL_JUMP)  ; LAB_004c6908
    MOV EDI,dword ptr [EBX + 0x804]     ; 004c693d
        ;   Label: LAB_004c693d
    CMP EDI,0x1                         ; 004c6943
    JNZ 0x004c695e                      ; 004c6946
        ;   XREF to: 004c695e (CONDITIONAL_JUMP)  ; LAB_004c695e
    FLD float ptr [ESP + 0x8]           ; 004c6948
    FLDZ                                ; 004c694c
    FCOMPP                              ; 004c694e
    FNSTSW AX                           ; 004c6950
    SAHF                                ; 004c6952
    JBE 0x004c695e                      ; 004c6953
        ;   XREF to: 004c695e (CONDITIONAL_JUMP)  ; LAB_004c695e
    MOV EAX,EDI                         ; 004c6955
    MOV ESP,EBP                         ; 004c6957
    POP EBP                             ; 004c6959
    POP EDI                             ; 004c695a
    POP ESI                             ; 004c695b
    POP EBX                             ; 004c695c
    RET                                 ; 004c695d
    XOR EAX,EAX                         ; 004c695e
        ;   Label: LAB_004c695e
    MOV ESP,EBP                         ; 004c6960
    POP EBP                             ; 004c6962
    POP EDI                             ; 004c6963
    POP ESI                             ; 004c6964
    POP EBX                             ; 004c6965
    RET                                 ; 004c6966

