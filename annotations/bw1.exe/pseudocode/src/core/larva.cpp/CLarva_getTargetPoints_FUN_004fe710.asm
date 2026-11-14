; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_larva_cpp_CLarva_getTargetPoints_FUN_004fe710(CLarva *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe710
        ;   Label: core_larva.cpp_CLarva_getTargetPoints_FUN_004fe710
    PUSH ESI                            ; 004fe711
    PUSH EDI                            ; 004fe712
    SUB ESP,0x18                        ; 004fe713
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004fe716
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fe71a
    PUSH 0x0                            ; 004fe71e
    ADD EAX,0x158                       ; 004fe720
    PUSH EAX                            ; 004fe725
    LEA ESI,[ESP + 0x14]                ; 004fe726
    LEA EDI,[ESP + 0x8]                 ; 004fe72a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004fe72e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x14]                ; 004fe733
    ADD ESP,0x8                         ; 004fe737
    MOV EAX,ESP                         ; 004fe73a
    MOVSD ES:EDI,ESI                    ; 004fe73c
    MOVSD ES:EDI,ESI                    ; 004fe73d
    MOVSD ES:EDI,ESI                    ; 004fe73e
    CMP EBX,EAX                         ; 004fe73f
    JNZ 0x004fe74f                      ; 004fe741
        ;   XREF to: 004fe74f (CONDITIONAL_JUMP)  ; LAB_004fe74f
    MOV EAX,0x1                         ; 004fe743
    ADD ESP,0x18                        ; 004fe748
    POP EDI                             ; 004fe74b
    POP ESI                             ; 004fe74c
    POP EBX                             ; 004fe74d
    RET                                 ; 004fe74e
    MOV EAX,dword ptr [ESP]             ; 004fe74f
        ;   Label: LAB_004fe74f
    MOV dword ptr [EBX],EAX             ; 004fe752
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fe754
    MOV dword ptr [EBX + 0x4],EAX       ; 004fe758
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fe75b
    MOV dword ptr [EBX + 0x8],EAX       ; 004fe75f
    MOV EAX,0x1                         ; 004fe762
    ADD ESP,0x18                        ; 004fe767
    POP EDI                             ; 004fe76a
    POP ESI                             ; 004fe76b
    POP EBX                             ; 004fe76c
    RET                                 ; 004fe76d

