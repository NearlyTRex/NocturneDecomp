; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_FUN_0050bc30(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Called Functions:
;   core_course.cpp_CCourse_FUN_00442710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bc30
        ;   Label: core_marquee.cpp_CMarquee_FUN_0050bc30
    PUSH ESI                            ; 0050bc31
    PUSH EDI                            ; 0050bc32
    SUB ESP,0x20                        ; 0050bc33
    MOV EBX,dword ptr [ESP + 0x30]      ; 0050bc36
    MOV dword ptr [EBX + 0x188],0x461c3f9a ; 0050bc3a
    MOV dword ptr [EBX + 0x18c],0x461c3f9a ; 0050bc44
    MOV dword ptr [EBX + 0x190],0xc61c3f9a ; 0050bc4e
    MOV dword ptr [EBX + 0x194],0xc61c3f9a ; 0050bc58
    MOV dword ptr [EBX + 0x198],0xc61c3f9a ; 0050bc62
    LEA EDI,[EBX + 0x1a4]               ; 0050bc6c
    MOV dword ptr [EBX + 0x184],0x461c3f9a ; 0050bc72
    XOR ESI,ESI                         ; 0050bc7c
    MOV EAX,dword ptr [EDI]             ; 0050bc7e
    CMP ESI,EAX                         ; 0050bc80
    JL 0x0050bc8b                       ; 0050bc82
        ;   XREF to: 0050bc8b (CONDITIONAL_JUMP)  ; LAB_0050bc8b
    ADD ESP,0x20                        ; 0050bc84
    POP EDI                             ; 0050bc87
    POP ESI                             ; 0050bc88
    POP EBX                             ; 0050bc89
    RET                                 ; 0050bc8a
    MOV EAX,ESP                         ; 0050bc8b
        ;   Label: LAB_0050bc8b
    MOV dword ptr [ESP + 0x1c],ESI      ; 0050bc8d
    PUSH EAX                            ; 0050bc91
    LEA EAX,[ESP + 0x10]                ; 0050bc92
    FILD dword ptr [ESP + 0x20]         ; 0050bc96
    PUSH EAX                            ; 0050bc9a
    FSTP float ptr [ESP + 0x20]         ; 0050bc9b
    PUSH dword ptr [ESP + 0x20]         ; 0050bc9f
    PUSH EDI                            ; 0050bca3
    CALL core_course.cpp_CCourse_FUN_00442710 ; 0050bca4
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_FUN_00442710(CCourse * this_ptr)
    ADD ESP,0x10                        ; 0050bca9
    FLD float ptr [ESP + 0xc]           ; 0050bcac
    FCOMP float ptr [EBX + 0x184]       ; 0050bcb0
    FNSTSW AX                           ; 0050bcb6
    SAHF                                ; 0050bcb8
    JNC 0x0050bcc5                      ; 0050bcb9
        ;   XREF to: 0050bcc5 (CONDITIONAL_JUMP)  ; LAB_0050bcc5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050bcbb
    MOV dword ptr [EBX + 0x184],EAX     ; 0050bcbf
    FLD float ptr [ESP + 0xc]           ; 0050bcc5
        ;   Label: LAB_0050bcc5
    FCOMP float ptr [EBX + 0x190]       ; 0050bcc9
    FNSTSW AX                           ; 0050bccf
    SAHF                                ; 0050bcd1
    JBE 0x0050bcde                      ; 0050bcd2
        ;   XREF to: 0050bcde (CONDITIONAL_JUMP)  ; LAB_0050bcde
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050bcd4
    MOV dword ptr [EBX + 0x190],EAX     ; 0050bcd8
    FLD float ptr [ESP + 0x10]          ; 0050bcde
        ;   Label: LAB_0050bcde
    FCOMP float ptr [EBX + 0x188]       ; 0050bce2
    FNSTSW AX                           ; 0050bce8
    SAHF                                ; 0050bcea
    JNC 0x0050bcf7                      ; 0050bceb
        ;   XREF to: 0050bcf7 (CONDITIONAL_JUMP)  ; LAB_0050bcf7
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050bced
    MOV dword ptr [EBX + 0x188],EAX     ; 0050bcf1
    FLD float ptr [ESP + 0x10]          ; 0050bcf7
        ;   Label: LAB_0050bcf7
    FCOMP float ptr [EBX + 0x194]       ; 0050bcfb
    FNSTSW AX                           ; 0050bd01
    SAHF                                ; 0050bd03
    JBE 0x0050bd10                      ; 0050bd04
        ;   XREF to: 0050bd10 (CONDITIONAL_JUMP)  ; LAB_0050bd10
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050bd06
    MOV dword ptr [EBX + 0x194],EAX     ; 0050bd0a
    FLD float ptr [ESP + 0x14]          ; 0050bd10
        ;   Label: LAB_0050bd10
    FCOMP float ptr [EBX + 0x18c]       ; 0050bd14
    FNSTSW AX                           ; 0050bd1a
    SAHF                                ; 0050bd1c
    JNC 0x0050bd29                      ; 0050bd1d
        ;   XREF to: 0050bd29 (CONDITIONAL_JUMP)  ; LAB_0050bd29
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050bd1f
    MOV dword ptr [EBX + 0x18c],EAX     ; 0050bd23
    FLD float ptr [ESP + 0x14]          ; 0050bd29
        ;   Label: LAB_0050bd29
    FCOMP float ptr [EBX + 0x198]       ; 0050bd2d
    FNSTSW AX                           ; 0050bd33
    SAHF                                ; 0050bd35
    JBE 0x0050bd42                      ; 0050bd36
        ;   XREF to: 0050bd42 (CONDITIONAL_JUMP)  ; LAB_0050bd42
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050bd38
    MOV dword ptr [EBX + 0x198],EAX     ; 0050bd3c
    INC ESI                             ; 0050bd42
        ;   Label: LAB_0050bd42
    MOV EAX,dword ptr [EDI]             ; 0050bd43
    CMP ESI,EAX                         ; 0050bd45
    JL 0x0050bc8b                       ; 0050bd47
        ;   XREF to: 0050bc8b (CONDITIONAL_JUMP)  ; LAB_0050bc8b
    ADD ESP,0x20                        ; 0050bd4d
    POP EDI                             ; 0050bd50
    POP ESI                             ; 0050bd51
    POP EBX                             ; 0050bd52
    RET                                 ; 0050bd53

