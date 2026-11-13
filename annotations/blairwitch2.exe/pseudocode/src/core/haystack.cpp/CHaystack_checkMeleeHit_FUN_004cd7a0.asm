; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004cd7a0(CHaystack *this_ptr,int bone_index)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_haystack.cpp_CHaystack_advanceMotion_FUN_004cd660 at 004cd69c
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd7a0
        ;   Label: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004cd7a0
    PUSH ESI                            ; 004cd7a1
    PUSH EDI                            ; 004cd7a2
    PUSH EBP                            ; 004cd7a3
    SUB ESP,0x6c                        ; 004cd7a4
    MOV EBP,dword ptr [ESP + 0x80]      ; 004cd7a7
    MOV EDX,dword ptr [ESP + 0x84]      ; 004cd7ae
    PUSH EDX                            ; 004cd7b5
    LEA EAX,[EBP + 0x2b4]               ; 004cd7b6
    PUSH EAX                            ; 004cd7bc
    LEA ESI,[ESP + 0x5c]                ; 004cd7bd
    LEA EDI,[ESP + 0x50]                ; 004cd7c1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004cd7c5
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004cd7ca
    LEA EAX,[ESP + 0x48]                ; 004cd7cd
    LEA ESI,[ESP + 0x54]                ; 004cd7d1
    PUSH EAX                            ; 004cd7d5
    MOVSD ES:EDI,ESI                    ; 004cd7d6
    MOVSD ES:EDI,ESI                    ; 004cd7d7
    MOVSD ES:EDI,ESI                    ; 004cd7d8
    PUSH EBP                            ; 004cd7d9
    LEA ESI,[ESP + 0x44]                ; 004cd7da
    LEA EDI,[ESP + 0x68]                ; 004cd7de
    CALL core_actor.cpp_FUN_00408d70    ; 004cd7e2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x44]                ; 004cd7e7
    ADD ESP,0x8                         ; 004cd7eb
    MOVSD ES:EDI,ESI                    ; 004cd7ee
    MOVSD ES:EDI,ESI                    ; 004cd7ef
    MOVSD ES:EDI,ESI                    ; 004cd7f0
    XOR EDI,EDI                         ; 004cd7f1
    XOR ESI,ESI                         ; 004cd7f3
    MOV EBX,dword ptr [0x0061b5a8]      ; 004cd7f5 | g_CDemonSetPtr
        ;   Label: LAB_004cd7f5
    CMP EDI,dword ptr [EBX + 0x14f0a8]  ; 004cd7fb | g_CDemonSetInstance.character_count
    JGE 0x004cd84f                      ; 004cd801
        ;   XREF to: 004cd84f (CONDITIONAL_JUMP)  ; LAB_004cd84f
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f0ac] ; 004cd803
    CMP EBX,EBP                         ; 004cd80a
    JNZ 0x004cd814                      ; 004cd80c
        ;   XREF to: 004cd814 (CONDITIONAL_JUMP)  ; LAB_004cd814
    INC EDI                             ; 004cd80e
        ;   Label: LAB_004cd80e
    ADD ESI,0x4                         ; 004cd80f
    JMP 0x004cd7f5                      ; 004cd812
        ;   XREF to: 004cd7f5 (UNCONDITIONAL_JUMP)  ; LAB_004cd7f5
    MOV EAX,ESP                         ; 004cd814
        ;   Label: LAB_004cd814
    PUSH EAX                            ; 004cd816
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004cd817
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,0x41200000                  ; 004cd81c
    ADD ESP,0x4                         ; 004cd821
    MOV dword ptr [ESP + 0x4],EAX       ; 004cd824
    MOV EAX,ESP                         ; 004cd828
    PUSH EAX                            ; 004cd82a
    MOV dword ptr [ESP + 0x38],EBP      ; 004cd82b
    PUSH 0x3f000000                     ; 004cd82f
    LEA EAX,[ESP + 0x68]                ; 004cd834
    MOV dword ptr [ESP + 0x40],EBP      ; 004cd838
    PUSH EAX                            ; 004cd83c
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004cd83d
    PUSH EBX                            ; 004cd843
    CALL dword ptr [EDX + 0x108]        ; 004cd844
    ADD ESP,0x10                        ; 004cd84a
    JMP 0x004cd80e                      ; 004cd84d
        ;   XREF to: 004cd80e (UNCONDITIONAL_JUMP)  ; LAB_004cd80e
    ADD ESP,0x6c                        ; 004cd84f
        ;   Label: LAB_004cd84f
    POP EBP                             ; 004cd852
    POP EDI                             ; 004cd853
    POP ESI                             ; 004cd854
    POP EBX                             ; 004cd855
    RET                                 ; 004cd856

