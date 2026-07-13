; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004e18d0(int *param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[19]:
;   FUN_00429fe0 at 0042a03c
;   FUN_00495a20 at 00496089
;   FUN_00497410 at 0049755f
;   FUN_004a9270 at 004a92e2
;   FUN_004aaf40 at 004aaf60
;   FUN_004b4d50 at 004b4d96
;   FUN_004b6d80 at 004b70cd
;   FUN_004d4f30 at 004d5305
;   FUN_004fbf20 at 004fc1ae
;   FUN_004fcff0 at 004fd05c
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e18d0
        ;   Label: FUN_004e18d0
    PUSH EBP                            ; 004e18d1
    MOV EBP,ESP                         ; 004e18d2
    SUB ESP,0xc                         ; 004e18d4
    AND ESP,0xfffffff8                  ; 004e18d7
    MOV EDX,dword ptr [EBP + 0xc]       ; 004e18da
    MOV EBX,dword ptr [EBP + 0x10]      ; 004e18dd
    FLDZ                                ; 004e18e0
    FLD float ptr [EDX + 0x14]          ; 004e18e2
    FSTP double ptr [ESP]               ; 004e18e5
    FCOMP double ptr [ESP]              ; 004e18e8
    FNSTSW AX                           ; 004e18eb
    SAHF                                ; 004e18ed
    JNC 0x004e192d                      ; 004e18ee
        ;   XREF to: 004e192d (CONDITIONAL_JUMP)  ; LAB_004e192d
    IMUL ECX,dword ptr [EDX + 0x18],0x54c ; 004e18f0
    MOV EAX,dword ptr [EDX]             ; 004e18f7
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x98c] ; 004e18f9
    JZ 0x004e1924                       ; 004e1900
        ;   XREF to: 004e1924 (CONDITIONAL_JUMP)  ; LAB_004e1924
    IMUL EDX,dword ptr [EDX + 0x4],0x54c ; 004e1902
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x98c] ; 004e1909
    JNZ 0x004e1949                      ; 004e1910
        ;   XREF to: 004e1949 (CONDITIONAL_JUMP)  ; LAB_004e1949
    FLD1                                ; 004e1912
    FSUB double ptr [ESP]               ; 004e1914
    FSTP float ptr [ESP + 0x8]          ; 004e1917
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e191b
        ;   Label: LAB_004e191b
    MOV ESP,EBP                         ; 004e191f
    POP EBP                             ; 004e1921
    POP EBX                             ; 004e1922
    RET                                 ; 004e1923
    MOV EAX,dword ptr [EDX + 0x14]      ; 004e1924
        ;   Label: LAB_004e1924
    MOV dword ptr [ESP + 0x8],EAX       ; 004e1927
    JMP 0x004e191b                      ; 004e192b
        ;   XREF to: 004e191b (UNCONDITIONAL_JUMP)  ; LAB_004e191b
    IMUL EAX,dword ptr [EDX + 0x4],0x54c ; 004e192d
        ;   Label: LAB_004e192d
    MOV EDX,dword ptr [EDX]             ; 004e1934
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x98c] ; 004e1936
    JNZ 0x004e1949                      ; 004e193d
        ;   XREF to: 004e1949 (CONDITIONAL_JUMP)  ; LAB_004e1949
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004e193f
    JMP 0x004e191b                      ; 004e1947
        ;   XREF to: 004e191b (UNCONDITIONAL_JUMP)  ; LAB_004e191b
    XOR EBX,EBX                         ; 004e1949
        ;   Label: LAB_004e1949
    MOV dword ptr [ESP + 0x8],EBX       ; 004e194b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e194f
    MOV ESP,EBP                         ; 004e1953
    POP EBP                             ; 004e1955
    POP EBX                             ; 004e1956
    RET                                 ; 004e1957

