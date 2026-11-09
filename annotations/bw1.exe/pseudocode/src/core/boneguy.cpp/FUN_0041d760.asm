; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_FUN_0041d760(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_boneguy.cpp_FUN_0041bb40 at 0041bc04
;
; Referenced Globals:
;   TerminatedCString s_boneguy_comeback_wav_005d495c
;
; Called Functions:
;   core_xform.cpp_FUN_005b7ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d760
        ;   Label: core_boneguy.cpp_FUN_0041d760
    PUSH ESI                            ; 0041d761
    PUSH EDI                            ; 0041d762
    PUSH EBP                            ; 0041d763
    SUB ESP,0x14                        ; 0041d764
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d767
    XOR EDX,EDX                         ; 0041d76b
    MOV ECX,dword ptr [EAX + 0xc2e4]    ; 0041d76d
    MOV dword ptr [ESP + 0x10],EDX      ; 0041d773
    TEST ECX,ECX                        ; 0041d777
    JLE 0x0041d7f8                      ; 0041d779
        ;   XREF to: 0041d7f8 (CONDITIONAL_JUMP)  ; LAB_0041d7f8
    LEA EBP,[EAX + 0xc320]              ; 0041d77f
    MOV EBX,EAX                         ; 0041d785
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 0041d787
        ;   Label: LAB_0041d787
    ADD EAX,0x30                        ; 0041d78d
    PUSH EAX                            ; 0041d790
    LEA ESI,[ESP + 0x4]                 ; 0041d791
    CALL core_xform.cpp_FUN_005b7ed0    ; 0041d795
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7ed0()
    LEA ESI,[ESP + 0x4]                 ; 0041d79a
    LEA EDI,[EBX + 0xc300]              ; 0041d79e
    ADD ESP,0x4                         ; 0041d7a4
    MOVSD ES:EDI,ESI                    ; 0041d7a7
    MOVSD ES:EDI,ESI                    ; 0041d7a8
    MOVSD ES:EDI,ESI                    ; 0041d7a9
    MOVSD ES:EDI,ESI                    ; 0041d7aa
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 0041d7ab
    MOV dword ptr [EAX + 0xf24],0x0     ; 0041d7b1
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 0041d7bb
    ADD EAX,0x20                        ; 0041d7c1
    CMP EBP,EAX                         ; 0041d7c4
    JZ 0x0041d7d9                       ; 0041d7c6
        ;   XREF to: 0041d7d9 (CONDITIONAL_JUMP)  ; LAB_0041d7d9
    MOV EDX,dword ptr [EAX]             ; 0041d7c8
    MOV dword ptr [EBP],EDX             ; 0041d7ca
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d7cd
    MOV dword ptr [EBP + 0x4],EDX       ; 0041d7d0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d7d3
    MOV dword ptr [EBP + 0x8],EDX       ; 0041d7d6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041d7d9
        ;   Label: LAB_0041d7d9
    INC ESI                             ; 0041d7dd
    MOV dword ptr [ESP + 0x10],ESI      ; 0041d7de
    MOV EAX,ESI                         ; 0041d7e2
    MOV ESI,dword ptr [ESP + 0x28]      ; 0041d7e4
    ADD EBP,0x48                        ; 0041d7e8
    MOV EDI,dword ptr [ESI + 0xc2e4]    ; 0041d7eb
    ADD EBX,0x48                        ; 0041d7f1
    CMP EAX,EDI                         ; 0041d7f4
    JL 0x0041d787                       ; 0041d7f6
        ;   XREF to: 0041d787 (CONDITIONAL_JUMP)  ; LAB_0041d787
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d7f8
        ;   Label: LAB_0041d7f8
    PUSH 0x5d495c                       ; 0041d7fc | = "boneguy-comeback.wav"
    MOV dword ptr [EAX + 0xc888],0x2    ; 0041d801
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0041d80b
    MOV dword ptr [EAX + 0xc88c],0x0    ; 0041d80f
    PUSH EBP                            ; 0041d819
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041d81a
    CALL dword ptr [EAX + 0x2c]         ; 0041d820
    ADD ESP,0x8                         ; 0041d823
    ADD ESP,0x14                        ; 0041d826
    POP EBP                             ; 0041d829
    POP EDI                             ; 0041d82a
    POP ESI                             ; 0041d82b
    POP EBX                             ; 0041d82c
    RET                                 ; 0041d82d

