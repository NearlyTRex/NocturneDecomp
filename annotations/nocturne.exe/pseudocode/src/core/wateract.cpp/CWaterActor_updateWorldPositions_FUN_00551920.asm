; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_updateWorldPositions_FUN_00551920(CWaterActor *this_ptr)
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
; XREF[1]:
;   core_wateract.cpp_CWaterActor_setup_FUN_00551370 at 00551641
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551920
        ;   Label: core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_00551920
    PUSH ESI                            ; 00551921
    PUSH EDI                            ; 00551922
    PUSH EBP                            ; 00551923
    SUB ESP,0x20                        ; 00551924
    MOV EBP,dword ptr [ESP + 0x34]      ; 00551927
    MOV EDX,dword ptr [EBP + 0x290]     ; 0055192b
    XOR ESI,ESI                         ; 00551931
    TEST EDX,EDX                        ; 00551933
    JLE 0x0055199e                      ; 00551935
        ;   XREF to: 0055199e (CONDITIONAL_JUMP)  ; LAB_0055199e
    LEA EAX,[EBP + 0x294]               ; 00551937
    MOV dword ptr [ESP + 0x18],EAX      ; 0055193d
    LEA EAX,[EBP + 0x3c]                ; 00551941
    LEA EDI,[EBP + 0x20]                ; 00551944
    MOV dword ptr [ESP + 0x1c],EAX      ; 00551947
    LEA EBX,[EBP + 0x2a0]               ; 0055194b
    MOV EAX,ESI                         ; 00551951
        ;   Label: LAB_00551951
    MOV EDX,dword ptr [ESP + 0x18]      ; 00551953
    SHL EAX,0x5                         ; 00551957
    ADD EAX,EDX                         ; 0055195a
    PUSH EAX                            ; 0055195c
    LEA EAX,[ESP + 0x10]                ; 0055195d
    PUSH EAX                            ; 00551961
    MOV ECX,dword ptr [ESP + 0x24]      ; 00551962
    PUSH ECX                            ; 00551966
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00551967
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 0055196c
    FADD float ptr [EDI]                ; 0055196e
    ADD ESP,0xc                         ; 00551970
    FSTP float ptr [ESP]                ; 00551973
    FLD float ptr [EAX + 0x4]           ; 00551976
    FADD float ptr [EDI + 0x4]          ; 00551979
    FSTP float ptr [ESP + 0x4]          ; 0055197c
    FLD float ptr [EAX + 0x8]           ; 00551980
    FADD float ptr [EDI + 0x8]          ; 00551983
    MOV EAX,ESP                         ; 00551986
    FSTP float ptr [ESP + 0x8]          ; 00551988
    CMP EBX,EAX                         ; 0055198c
    JNZ 0x005519a6                      ; 0055198e
        ;   XREF to: 005519a6 (CONDITIONAL_JUMP)  ; LAB_005519a6
    INC ESI                             ; 00551990
        ;   Label: LAB_00551990
    MOV ECX,dword ptr [EBP + 0x290]     ; 00551991
    ADD EBX,0x20                        ; 00551997
    CMP ESI,ECX                         ; 0055199a
    JL 0x00551951                       ; 0055199c
        ;   XREF to: 00551951 (CONDITIONAL_JUMP)  ; LAB_00551951
    ADD ESP,0x20                        ; 0055199e
        ;   Label: LAB_0055199e
    POP EBP                             ; 005519a1
    POP EDI                             ; 005519a2
    POP ESI                             ; 005519a3
    POP EBX                             ; 005519a4
    RET                                 ; 005519a5
    MOV EAX,dword ptr [ESP]             ; 005519a6
        ;   Label: LAB_005519a6
    MOV dword ptr [EBX],EAX             ; 005519a9
    MOV EAX,dword ptr [ESP + 0x4]       ; 005519ab
    MOV dword ptr [EBX + 0x4],EAX       ; 005519af
    MOV EAX,dword ptr [ESP + 0x8]       ; 005519b2
    MOV dword ptr [EBX + 0x8],EAX       ; 005519b6
    JMP 0x00551990                      ; 005519b9
        ;   XREF to: 00551990 (UNCONDITIONAL_JUMP)  ; LAB_00551990

