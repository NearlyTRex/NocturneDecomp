; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_005098f0(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920 at 00508a55
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005098f0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_005098f0
    PUSH ESI                            ; 005098f1
    PUSH EDI                            ; 005098f2
    PUSH EBP                            ; 005098f3
    SUB ESP,0x4                         ; 005098f4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005098f7
    MOV EBX,EAX                         ; 005098fb
    LEA ESI,[EAX + 0x30]                ; 005098fd
    MOV dword ptr [EBX + 0x5f4],0x0     ; 00509900
        ;   Label: LAB_00509900
    MOV dword ptr [EBX + 0x5f8],0x0     ; 0050990a
    MOV dword ptr [EBX + 0x63c],0x0     ; 00509914
    MOV dword ptr [EBX + 0x640],0x0     ; 0050991e
    MOV dword ptr [EBX + 0x644],0x0     ; 00509928
    ADD EAX,0x4                         ; 00509932
    MOV dword ptr [EBX + 0x5f0],0x1     ; 00509935
    MOV dword ptr [EAX + 0x13fc],0x0    ; 0050993f
    MOV dword ptr [EAX + 0x142c],0x0    ; 00509949
    MOV dword ptr [EAX + 0x145c],0x0    ; 00509953
    ADD EBX,0x64                        ; 0050995d
    MOV dword ptr [EAX + 0x148c],0x0    ; 00509960
    CMP EAX,ESI                         ; 0050996a
    JNZ 0x00509900                      ; 0050996c
        ;   XREF to: 00509900 (CONDITIONAL_JUMP)  ; LAB_00509900
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050996e
    MOV dword ptr [EAX + 0x644],0xff    ; 00509972
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050997c
    MOV EAX,dword ptr [EAX + 0x644]     ; 00509980
    MOV dword ptr [EBX + 0x6a0],0xff    ; 00509986
    MOV dword ptr [EBX + 0x704],0xff    ; 00509990
    MOV dword ptr [EBX + 0x71c],0x0     ; 0050999a
    MOV dword ptr [EBX + 0x7cc],0xff    ; 005099a4
    MOV dword ptr [EBX + 0x838],0xff    ; 005099ae
    MOV dword ptr [EBX + 0x848],0x0     ; 005099b8
    MOV dword ptr [EBX + 0x8f8],0xff    ; 005099c2
    MOV dword ptr [EBX + 0x964],0xff    ; 005099cc
    MOV dword ptr [EBX + 0x9c0],0xff    ; 005099d6
    MOV dword ptr [EBX + 0xa2c],0xff    ; 005099e0
    MOV dword ptr [EBX + 0xa90],0xff    ; 005099ea
    MOV dword ptr [EBX + 0x1460],0xff   ; 005099f4
    MOV dword ptr [EBX + 0x1464],0xff   ; 005099fe
    MOV dword ptr [EBX + 0x1408],0xff   ; 00509a08
    MOV dword ptr [EBX + 0x140c],0xff   ; 00509a12
    MOV dword ptr [EBX + 0x1470],0xff   ; 00509a1c
    MOV dword ptr [EBX + 0x1414],0xff   ; 00509a26
    MOV dword ptr [EBX + 0x1418],0xff   ; 00509a30
    MOV dword ptr [EBX + 0x147c],0xff   ; 00509a3a
    MOV dword ptr [EBX + 0x1480],0xff   ; 00509a44
    MOV dword ptr [EBX + 0x1484],0xff   ; 00509a4e
    MOV dword ptr [EBX + 0x1428],0xff   ; 00509a58
    MOV dword ptr [EBX + 0x63c],EAX     ; 00509a62
    MOV EAX,dword ptr [EBX + 0x1460]    ; 00509a68
    XOR ESI,ESI                         ; 00509a6e
    MOV dword ptr [EBX + 0x1400],EAX    ; 00509a70
    LEA EAX,[EBX + 0xaa0]               ; 00509a76
    MOV dword ptr [EBX + 0x142c],0xff   ; 00509a7c
    LEA EDI,[EBX + 0xaa4]               ; 00509a86
    MOV dword ptr [ESP],EAX             ; 00509a8c
    LEA EBP,[EBX + 0xaa8]               ; 00509a8f
    IMUL EBX,ESI,0xb8                   ; 00509a95
        ;   Label: LAB_00509a95
    PUSH EBP                            ; 00509a9b
    MOV EDX,dword ptr [ESP + 0x4]       ; 00509a9c
    PUSH EDI                            ; 00509aa0
    ADD EBX,EDX                         ; 00509aa1
    PUSH EBX                            ; 00509aa3
    PUSH ESI                            ; 00509aa4
    MOV ECX,dword ptr [ESP + 0x28]      ; 00509aa5
    PUSH ECX                            ; 00509aa9
    ADD EBP,0xb8                        ; 00509aaa
    ADD EDI,0xb8                        ; 00509ab0
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420 ; 00509ab6
        ;   XREF to: 0050a420 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420(CMansionPuzzleCircle * this_ptr)
    MOV dword ptr [EBX + 0x14],0x0      ; 00509abb
    INC ESI                             ; 00509ac2
    MOV dword ptr [EBX + 0x20],0x0      ; 00509ac3
    ADD ESP,0x14                        ; 00509aca
    FLD float ptr [EBX + 0x20]          ; 00509acd
    MOV EAX,dword ptr [EBX + 0x14]      ; 00509ad0
    MOV dword ptr [EBX + 0x10],EAX      ; 00509ad3
    FST float ptr [EBX + 0x1c]          ; 00509ad6
    MOV EAX,dword ptr [EBX + 0x10]      ; 00509ad9
    MOV dword ptr [EBX + 0xc],EAX       ; 00509adc
    FSTP float ptr [EBX + 0x18]         ; 00509adf
    CMP ESI,0xc                         ; 00509ae2
    JL 0x00509a95                       ; 00509ae5
        ;   XREF to: 00509a95 (CONDITIONAL_JUMP)  ; LAB_00509a95
    MOV EAX,dword ptr [ESP + 0x18]      ; 00509ae7
    MOV dword ptr [EAX + 0x139c],0x1    ; 00509aeb
    MOV dword ptr [EAX + 0x13b8],0x0    ; 00509af5
    MOV dword ptr [EAX + 0x13fc],0xb    ; 00509aff
    MOV dword ptr [EAX + 0x1358],0x0    ; 00509b09
    ADD ESP,0x4                         ; 00509b13
    POP EBP                             ; 00509b16
    POP EDI                             ; 00509b17
    POP ESI                             ; 00509b18
    POP EBX                             ; 00509b19
    RET                                 ; 00509b1a

