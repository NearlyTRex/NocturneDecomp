; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060403f()
;
; Local Variables:
; undefined2       Stack[-0xc]:2  local_c
; undefined2       Stack[-0x8]:2  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   crt_unknown.c_FUN_0060411c at 00604130
;
; Called Functions:
;   crt_unknown.c_FUN_006040d7
;   crt_unknown.c_FUN_0060411c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [EBP + -0x18]     ; 0060403f
        ;   Label: crt_unknown.c_FUN_0060403f
    TEST ECX,ECX                        ; 00604042
    JLE 0x00604135                      ; 00604044
        ;   XREF to: 00604135 (CONDITIONAL_JUMP)  ; LAB_00604135
    LEA EAX,[ECX + -0x8]                ; 0060404a
    MOV dword ptr [EBP + -0x18],EAX     ; 0060404d
    TEST EDI,EDI                        ; 00604050
    JNZ 0x006040c9                      ; 00604052
        ;   XREF to: 006040c9 (CONDITIONAL_JUMP)  ; LAB_006040c9
    TEST word ptr [EBP + -0x40],0x7fff  ; 00604054
    JZ 0x00604135                       ; 0060405a
        ;   XREF to: 00604135 (CONDITIONAL_JUMP)  ; LAB_00604135
    LEA EAX,[EBP + -0x48]               ; 00604060
    FLD extended double ptr [EAX]       ; 00604063
    PUSH EAX                            ; 00604065
    PUSH EAX                            ; 00604066
    FSTCW word ptr [ESP]                ; 00604067
    POP EAX                             ; 0060406b
    PUSH EAX                            ; 0060406c
    OR AH,0xc                           ; 0060406d
    PUSH EAX                            ; 00604070
    FLDCW word ptr [ESP]                ; 00604071
    POP EAX                             ; 00604074
    FISTP dword ptr [ESP + 0x4]         ; 00604075
    FLDCW word ptr [ESP]                ; 00604079
    POP EAX                             ; 0060407c
    POP EAX                             ; 0060407d
    MOV EDX,dword ptr [EBP + -0x18]     ; 0060407e
    MOV EDI,EAX                         ; 00604081
    TEST EDX,EDX                        ; 00604083
    JLE 0x006040c9                      ; 00604085
        ;   XREF to: 006040c9 (CONDITIONAL_JUMP)  ; LAB_006040c9
    LEA EDX,[EBP + -0x54]               ; 00604087
    LEA EBX,[EBP + -0x48]               ; 0060408a
    PUSH EAX                            ; 0060408d
    FILD dword ptr [ESP]                ; 0060408e
    POP EAX                             ; 00604091
    FSTP extended double ptr [EDX]      ; 00604092
    LEA EDX,[EBP + -0x54]               ; 00604094
    LEA EAX,[EBP + -0x48]               ; 00604097
    FLD extended double ptr [EAX]       ; 0060409a
    FLD extended double ptr [EDX]       ; 0060409c
    FSUBP                               ; 0060409e
    FSTP extended double ptr [EBX]      ; 006040a0
    MOV ECX,0x4019                      ; 006040a2
    MOV EBX,0xbebc2000                  ; 006040a7
    LEA EDX,[EBP + -0x54]               ; 006040ac
    LEA EAX,[EBP + -0x48]               ; 006040af
    MOV word ptr [EBP + -0x4c],CX       ; 006040b2
    MOV dword ptr [EBP + -0x50],EBX     ; 006040b6
    XOR ECX,ECX                         ; 006040b9
    LEA EBX,[EBP + -0x48]               ; 006040bb
    MOV dword ptr [EBP + -0x54],ECX     ; 006040be
    FLD extended double ptr [EAX]       ; 006040c1
    FLD extended double ptr [EDX]       ; 006040c3
    FMULP                               ; 006040c5
    FSTP extended double ptr [EBX]      ; 006040c7
    MOV EBX,dword ptr [EBP + -0x1c]     ; 006040c9
        ;   Label: LAB_006040c9
    MOV EAX,EDI                         ; 006040cc
    PUSH ECX                            ; 006040ce
    PUSH EDX                            ; 006040cf
    CALL crt_unknown.c_FUN_006040d7     ; 006040d0
        ;   XREF to: 006040d7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_006040d7()
    JMP 0x0060411c                      ; 006040d5
        ;   XREF to: 0060411c (UNCONDITIONAL_CALL)

