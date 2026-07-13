; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)
;
; Parameters:
; char *           Stack[0x4]:4   _Buf
; size_t           Stack[0x8]:4   _SizeInBytes
; int              Stack[0xc]:4   _Digits
; STRFLT           Stack[0x10]:4   _PtFlt
;
; XREF[3]:
;   __cftoe at 10007081
;   __cftof at 100071e7
;   __cftog at 10007319
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0xc]       ; 1000a2c0
        ;   Label: __fptostr
    PUSH EBX                            ; 1000a2c4
    MOV EDX,dword ptr [ESP + 0x8]       ; 1000a2c5
    PUSH ESI                            ; 1000a2c9
    MOV EAX,dword ptr [ESP + 0x10]      ; 1000a2ca
    PUSH EDI                            ; 1000a2ce
    PUSH EBP                            ; 1000a2cf
    LEA EDI,[EDX + 0x1]                 ; 1000a2d0
    MOV EBP,dword ptr [ECX + 0xc]       ; 1000a2d3
    MOV ESI,EDI                         ; 1000a2d6
    MOV byte ptr [EDX],0x30             ; 1000a2d8
    TEST EAX,EAX                        ; 1000a2db
    JLE 0x1000a2f2                      ; 1000a2dd
        ;   XREF to: 1000a2f2 (CONDITIONAL_JUMP)  ; LAB_1000a2f2
    MOV BL,byte ptr [EBP]               ; 1000a2df
        ;   Label: LAB_1000a2df
    TEST BL,BL                          ; 1000a2e2
    JZ 0x1000a2eb                       ; 1000a2e4
        ;   XREF to: 1000a2eb (CONDITIONAL_JUMP)  ; LAB_1000a2eb
    INC EBP                             ; 1000a2e6
    MOV byte ptr [ESI],BL               ; 1000a2e7
    JMP 0x1000a2ee                      ; 1000a2e9
        ;   XREF to: 1000a2ee (UNCONDITIONAL_JUMP)  ; LAB_1000a2ee
    MOV byte ptr [ESI],0x30             ; 1000a2eb
        ;   Label: LAB_1000a2eb
    INC ESI                             ; 1000a2ee
        ;   Label: LAB_1000a2ee
    DEC EAX                             ; 1000a2ef
    JNZ 0x1000a2df                      ; 1000a2f0
        ;   XREF to: 1000a2df (CONDITIONAL_JUMP)  ; LAB_1000a2df
    MOV byte ptr [ESI],0x0              ; 1000a2f2
        ;   Label: LAB_1000a2f2
    TEST EAX,EAX                        ; 1000a2f5
    JL 0x1000a310                       ; 1000a2f7
        ;   XREF to: 1000a310 (CONDITIONAL_JUMP)  ; LAB_1000a310
    CMP byte ptr [EBP],0x35             ; 1000a2f9
    JL 0x1000a310                       ; 1000a2fd
        ;   XREF to: 1000a310 (CONDITIONAL_JUMP)  ; LAB_1000a310
    DEC ESI                             ; 1000a2ff
    CMP byte ptr [ESI],0x39             ; 1000a300
    JNZ 0x1000a30e                      ; 1000a303
        ;   XREF to: 1000a30e (CONDITIONAL_JUMP)  ; LAB_1000a30e
    MOV byte ptr [ESI],0x30             ; 1000a305
        ;   Label: LAB_1000a305
    DEC ESI                             ; 1000a308
    CMP byte ptr [ESI],0x39             ; 1000a309
    JZ 0x1000a305                       ; 1000a30c
        ;   XREF to: 1000a305 (CONDITIONAL_JUMP)  ; LAB_1000a305
    INC byte ptr [ESI]                  ; 1000a30e
        ;   Label: LAB_1000a30e
    CMP byte ptr [EDX],0x31             ; 1000a310
        ;   Label: LAB_1000a310
    JNZ 0x1000a31d                      ; 1000a313
        ;   XREF to: 1000a31d (CONDITIONAL_JUMP)  ; LAB_1000a31d
    POP EBP                             ; 1000a315
    INC dword ptr [ECX + 0x4]           ; 1000a316
    POP EDI                             ; 1000a319
    POP ESI                             ; 1000a31a
    POP EBX                             ; 1000a31b
    RET                                 ; 1000a31c
    MOV ECX,0xffffffff                  ; 1000a31d
        ;   Label: LAB_1000a31d
    SUB EAX,EAX                         ; 1000a322
    SCASB.REPNE ES:EDI                  ; 1000a324
    NOT ECX                             ; 1000a326
    SUB EDI,ECX                         ; 1000a328
    MOV EAX,ECX                         ; 1000a32a
    SHR ECX,0x2                         ; 1000a32c
    MOV ESI,EDI                         ; 1000a32f
    MOV EDI,EDX                         ; 1000a331
    MOVSD.REP ES:EDI,ESI                ; 1000a333
    MOV ECX,EAX                         ; 1000a335
    POP EBP                             ; 1000a337
    AND ECX,0x3                         ; 1000a338
    MOVSB.REP ES:EDI,ESI                ; 1000a33b
    POP EDI                             ; 1000a33d
    POP ESI                             ; 1000a33e
    POP EBX                             ; 1000a33f
    RET                                 ; 1000a340

