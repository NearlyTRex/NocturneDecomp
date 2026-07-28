; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderFlames_FUN_00427290(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260 at 00427280
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427290
        ;   Label: core_charactr.cpp_CCharacter_renderFlames_FUN_00427290
    PUSH ESI                            ; 00427291
    PUSH EDI                            ; 00427292
    PUSH EBP                            ; 00427293
    SUB ESP,0x4                         ; 00427294
    MOV EBP,dword ptr [ESP + 0x18]      ; 00427297
    LEA EAX,[EBP + 0x150]               ; 0042729b
    PUSH EAX                            ; 004272a1
    XOR EDI,EDI                         ; 004272a2
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004272a4
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004272a9
    MOV EDX,dword ptr [EBP + 0x2f08]    ; 004272ac
    MOV dword ptr [ESP],EAX             ; 004272b2
    TEST EDX,EDX                        ; 004272b5
    JLE 0x004272f8                      ; 004272b7
        ;   XREF to: 004272f8 (CONDITIONAL_JUMP)  ; LAB_004272f8
    LEA EBX,[EBP + 0x33c4]              ; 004272b9
    MOV ESI,EBP                         ; 004272bf
    MOV EAX,dword ptr [ESI + 0x2f14]    ; 004272c1
        ;   Label: LAB_004272c1
    CMP dword ptr [EBP + EAX*0x4 + 0x2290],0x0 ; 004272c7
    JZ 0x004272e4                       ; 004272cf
        ;   XREF to: 004272e4 (CONDITIONAL_JUMP)  ; LAB_004272e4
    IMUL EAX,dword ptr [ESI + 0x2f18],0x24 ; 004272d1
    ADD EAX,dword ptr [ESP]             ; 004272d8
    CMP dword ptr [EAX + 0x2857c],-0x1  ; 004272db
    JNZ 0x00427300                      ; 004272e2
        ;   XREF to: 00427300 (CONDITIONAL_JUMP)  ; LAB_00427300
    ADD ESI,0x18                        ; 004272e4
        ;   Label: LAB_004272e4
    INC EDI                             ; 004272e7
    MOV ECX,dword ptr [EBP + 0x2f08]    ; 004272e8
    ADD EBX,0x29c                       ; 004272ee
    CMP EDI,ECX                         ; 004272f4
    JL 0x004272c1                       ; 004272f6
        ;   XREF to: 004272c1 (CONDITIONAL_JUMP)  ; LAB_004272c1
    ADD ESP,0x4                         ; 004272f8
        ;   Label: LAB_004272f8
    POP EBP                             ; 004272fb
    POP EDI                             ; 004272fc
    POP ESI                             ; 004272fd
    POP EBX                             ; 004272fe
    RET                                 ; 004272ff
    PUSH EBX                            ; 00427300
        ;   Label: LAB_00427300
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00427301
    CALL dword ptr [EAX + 0xc]          ; 00427307
    ADD ESP,0x4                         ; 0042730a
    JMP 0x004272e4                      ; 0042730d
        ;   XREF to: 004272e4 (UNCONDITIONAL_JUMP)  ; LAB_004272e4

