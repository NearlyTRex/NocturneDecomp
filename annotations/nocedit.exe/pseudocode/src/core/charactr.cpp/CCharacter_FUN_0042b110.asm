; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_charactr.cpp_CCharacter_FUN_0042b110(CCharacter * this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042b0e0 at 0042b100
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b110
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042b110
    PUSH ESI                            ; 0042b111
    PUSH EDI                            ; 0042b112
    PUSH EBP                            ; 0042b113
    SUB ESP,0x4                         ; 0042b114
    MOV EBP,dword ptr [ESP + 0x18]      ; 0042b117
    LEA EAX,[EBP + 0x158]               ; 0042b11b
    PUSH EAX                            ; 0042b121
    XOR EDI,EDI                         ; 0042b122
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0042b124
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042b129
    MOV EDX,dword ptr [EBP + 0x2f10]    ; 0042b12c
    MOV dword ptr [ESP],EAX             ; 0042b132
    TEST EDX,EDX                        ; 0042b135
    JLE 0x0042b178                      ; 0042b137
        ;   XREF to: 0042b178 (CONDITIONAL_JUMP)  ; LAB_0042b178
    LEA EBX,[EBP + 0x33cc]              ; 0042b139
    MOV ESI,EBP                         ; 0042b13f
    MOV EAX,dword ptr [ESI + 0x2f1c]    ; 0042b141
        ;   Label: LAB_0042b141
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0042b147
    JZ 0x0042b164                       ; 0042b14f
        ;   XREF to: 0042b164 (CONDITIONAL_JUMP)  ; LAB_0042b164
    IMUL EAX,dword ptr [ESI + 0x2f20],0x24 ; 0042b151
    ADD EAX,dword ptr [ESP]             ; 0042b158
    CMP dword ptr [EAX + 0x2857c],-0x1  ; 0042b15b
    JNZ 0x0042b180                      ; 0042b162
        ;   XREF to: 0042b180 (CONDITIONAL_JUMP)  ; LAB_0042b180
    ADD ESI,0x18                        ; 0042b164
        ;   Label: LAB_0042b164
    INC EDI                             ; 0042b167
    MOV ECX,dword ptr [EBP + 0x2f10]    ; 0042b168
    ADD EBX,0x2a4                       ; 0042b16e
    CMP EDI,ECX                         ; 0042b174
    JL 0x0042b141                       ; 0042b176
        ;   XREF to: 0042b141 (CONDITIONAL_JUMP)  ; LAB_0042b141
    ADD ESP,0x4                         ; 0042b178
        ;   Label: LAB_0042b178
    POP EBP                             ; 0042b17b
    POP EDI                             ; 0042b17c
    POP ESI                             ; 0042b17d
    POP EBX                             ; 0042b17e
    RET                                 ; 0042b17f
    PUSH EBX                            ; 0042b180
        ;   Label: LAB_0042b180
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b181
    CALL dword ptr [EAX + 0xc]          ; 0042b187
    ADD ESP,0x4                         ; 0042b18a
    JMP 0x0042b164                      ; 0042b18d
        ;   XREF to: 0042b164 (UNCONDITIONAL_JUMP)  ; LAB_0042b164

