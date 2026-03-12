; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_extractBoneScales_FUN_0058dde0(CDeformableModel *this_ptr,CBoneStructure *bone_structure)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CBoneStructure * Stack[0x8]:4   bone_structure
; Local Variables:
; undefined4[6]    Stack[-0x24]:24  local_24
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c388
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x28                           ; 0058dde0
        ;   Label: core_skeledit.cpp_CDeformableModel_extractBoneScales_FUN_0058dde0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058dde5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058ddea
    PUSH ESI                            ; 0058ddeb
    PUSH EDI                            ; 0058ddec
    SUB ESP,0x18                        ; 0058dded
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0058ddf0
    MOV EDX,dword ptr [ESI]             ; 0058ddf4
    XOR EBX,EBX                         ; 0058ddf6
    TEST EDX,EDX                        ; 0058ddf8
    JLE 0x0058de4b                      ; 0058ddfa
        ;   XREF to: 0058de4b (CONDITIONAL_JUMP)  ; LAB_0058de4b
    MOV EDX,dword ptr [ESP + 0x28]      ; 0058ddfc
    LEA ECX,[ESI + 0x28]                ; 0058de00
    ADD EDX,0x7c90                      ; 0058de03
    MOV EAX,dword ptr [ECX + 0xc]       ; 0058de09
        ;   Label: LAB_0058de09
    MOV dword ptr [ESP + 0x14],EAX      ; 0058de0c
    MOV EAX,dword ptr [ECX + 0x1c]      ; 0058de10
    MOV dword ptr [ESP + 0xc],EAX       ; 0058de13
    MOV EAX,dword ptr [ECX + 0x2c]      ; 0058de17
    MOV dword ptr [ESP + 0x10],EAX      ; 0058de1a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058de1e
    MOV dword ptr [ESP],EAX             ; 0058de22
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058de25
    MOV dword ptr [ESP + 0x4],EAX       ; 0058de29
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058de2d
    MOV dword ptr [ESP + 0x8],EAX       ; 0058de31
    MOV EAX,ESP                         ; 0058de35
    CMP EDX,EAX                         ; 0058de37
    JNZ 0x0058de52                      ; 0058de39
        ;   XREF to: 0058de52 (CONDITIONAL_JUMP)  ; LAB_0058de52
    ADD EDX,0xc                         ; 0058de3b
        ;   Label: LAB_0058de3b
    INC EBX                             ; 0058de3e
    MOV EDI,dword ptr [ESI]             ; 0058de3f
    ADD ECX,0x84                        ; 0058de41
    CMP EBX,EDI                         ; 0058de47
    JL 0x0058de09                       ; 0058de49
        ;   XREF to: 0058de09 (CONDITIONAL_JUMP)  ; LAB_0058de09
    ADD ESP,0x18                        ; 0058de4b
        ;   Label: LAB_0058de4b
    POP EDI                             ; 0058de4e
    POP ESI                             ; 0058de4f
    POP EBX                             ; 0058de50
    RET                                 ; 0058de51
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058de52
        ;   Label: LAB_0058de52
    MOV dword ptr [EDX],EAX             ; 0058de56
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058de58
    MOV dword ptr [EDX + 0x4],EAX       ; 0058de5c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058de5f
    MOV dword ptr [EDX + 0x8],EAX       ; 0058de63
    JMP 0x0058de3b                      ; 0058de66
        ;   XREF to: 0058de3b (UNCONDITIONAL_JUMP)  ; LAB_0058de3b

