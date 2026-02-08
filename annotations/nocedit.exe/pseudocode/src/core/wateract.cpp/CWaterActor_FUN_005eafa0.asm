; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_wateract_cpp_CWaterActor_FUN_005eafa0(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eafa0
        ;   Label: core_wateract.cpp_CWaterActor_FUN_005eafa0
    PUSH ESI                            ; 005eafa1
    PUSH EDI                            ; 005eafa2
    PUSH EBP                            ; 005eafa3
    SUB ESP,0x20                        ; 005eafa4
    MOV EBP,dword ptr [ESP + 0x34]      ; 005eafa7
    MOV EDX,dword ptr [EBP + 0x298]     ; 005eafab
    XOR ESI,ESI                         ; 005eafb1
    TEST EDX,EDX                        ; 005eafb3
    JLE 0x005eb01e                      ; 005eafb5
        ;   XREF to: 005eb01e (CONDITIONAL_JUMP)  ; LAB_005eb01e
    LEA EAX,[EBP + 0x29c]               ; 005eafb7
    MOV dword ptr [ESP + 0x18],EAX      ; 005eafbd
    LEA EAX,[EBP + 0x3c]                ; 005eafc1
    LEA EDI,[EBP + 0x20]                ; 005eafc4
    MOV dword ptr [ESP + 0x1c],EAX      ; 005eafc7
    LEA EBX,[EBP + 0x2a8]               ; 005eafcb
    MOV EAX,ESI                         ; 005eafd1
        ;   Label: LAB_005eafd1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005eafd3
    SHL EAX,0x5                         ; 005eafd7
    ADD EAX,EDX                         ; 005eafda
    PUSH EAX                            ; 005eafdc
    LEA EAX,[ESP + 0x10]                ; 005eafdd
    PUSH EAX                            ; 005eafe1
    MOV ECX,dword ptr [ESP + 0x24]      ; 005eafe2
    PUSH ECX                            ; 005eafe6
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005eafe7
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 005eafec
    FADD float ptr [EDI]                ; 005eafee
    ADD ESP,0xc                         ; 005eaff0
    FSTP float ptr [ESP]                ; 005eaff3
    FLD float ptr [EAX + 0x4]           ; 005eaff6
    FADD float ptr [EDI + 0x4]          ; 005eaff9
    FSTP float ptr [ESP + 0x4]          ; 005eaffc
    FLD float ptr [EAX + 0x8]           ; 005eb000
    FADD float ptr [EDI + 0x8]          ; 005eb003
    MOV EAX,ESP                         ; 005eb006
    FSTP float ptr [ESP + 0x8]          ; 005eb008
    CMP EBX,EAX                         ; 005eb00c
    JNZ 0x005eb026                      ; 005eb00e
        ;   XREF to: 005eb026 (CONDITIONAL_JUMP)  ; LAB_005eb026
    INC ESI                             ; 005eb010
        ;   Label: LAB_005eb010
    MOV ECX,dword ptr [EBP + 0x298]     ; 005eb011
    ADD EBX,0x20                        ; 005eb017
    CMP ESI,ECX                         ; 005eb01a
    JL 0x005eafd1                       ; 005eb01c
        ;   XREF to: 005eafd1 (CONDITIONAL_JUMP)  ; LAB_005eafd1
    ADD ESP,0x20                        ; 005eb01e
        ;   Label: LAB_005eb01e
    POP EBP                             ; 005eb021
    POP EDI                             ; 005eb022
    POP ESI                             ; 005eb023
    POP EBX                             ; 005eb024
    RET                                 ; 005eb025
    MOV EAX,dword ptr [ESP]             ; 005eb026
        ;   Label: LAB_005eb026
    MOV dword ptr [EBX],EAX             ; 005eb029
    MOV EAX,dword ptr [ESP + 0x4]       ; 005eb02b
    MOV dword ptr [EBX + 0x4],EAX       ; 005eb02f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005eb032
    MOV dword ptr [EBX + 0x8],EAX       ; 005eb036
    JMP 0x005eb010                      ; 005eb039
        ;   XREF to: 005eb010 (UNCONDITIONAL_JUMP)  ; LAB_005eb010

