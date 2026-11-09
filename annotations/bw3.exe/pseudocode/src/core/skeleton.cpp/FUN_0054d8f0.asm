; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0054d8f0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_prye.cpp_FUN_0051c1c0 at 0051cb74
;   core_prye.cpp_FUN_0051ee10 at 0051f0e8
;   core_skeleton.cpp_FUN_0054dfd0 at 0054e14f
;
; Referenced Globals:
;   undefined4 DAT_005d2024
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_FUN_005481d0
;   core_xform.cpp_FUN_00585b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d8f0
        ;   Label: core_skeleton.cpp_FUN_0054d8f0
    PUSH ESI                            ; 0054d8f1
    PUSH EDI                            ; 0054d8f2
    PUSH EBP                            ; 0054d8f3
    SUB ESP,0x1c                        ; 0054d8f4
    FLD float ptr [ESP + 0x38]          ; 0054d8f7
    FCOMP double ptr [0x005d2024]       ; 0054d8fb | DAT_005d2024
    FNSTSW AX                           ; 0054d901
    SAHF                                ; 0054d903
    JA 0x0054d90e                       ; 0054d904
        ;   XREF to: 0054d90e (CONDITIONAL_JUMP)  ; LAB_0054d90e
    ADD ESP,0x1c                        ; 0054d906
        ;   Label: LAB_0054d906
    POP EBP                             ; 0054d909
    POP EDI                             ; 0054d90a
    POP ESI                             ; 0054d90b
    POP EBX                             ; 0054d90c
    RET                                 ; 0054d90d
    MOV EDX,dword ptr [ESP + 0x30]      ; 0054d90e
        ;   Label: LAB_0054d90e
    PUSH EDX                            ; 0054d912
    XOR EBX,EBX                         ; 0054d913
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054d915
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054d91a
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 0054d91d
    MOV dword ptr [ESP + 0x10],EAX      ; 0054d923
    TEST ECX,ECX                        ; 0054d927
    JLE 0x0054d906                      ; 0054d929
        ;   XREF to: 0054d906 (CONDITIONAL_JUMP)  ; LAB_0054d906
    MOV EAX,dword ptr [ESP + 0x30]      ; 0054d92b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0054d92f
    MOV dword ptr [ESP + 0x14],EAX      ; 0054d933
    ADD EBP,0x6b0                       ; 0054d937
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0054d93d
        ;   Label: LAB_0054d93d
    PUSH EAX                            ; 0054d941
    PUSH EBX                            ; 0054d942
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054d943
    PUSH EDX                            ; 0054d947
    CALL core_skeleton.cpp_FUN_005481d0 ; 0054d948
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_005481d0(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0054d94d
    TEST EAX,EAX                        ; 0054d950
    JGE 0x0054d973                      ; 0054d952
        ;   XREF to: 0054d973 (CONDITIONAL_JUMP)  ; LAB_0054d973
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054d954
        ;   Label: LAB_0054d954
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054d958
    ADD EBP,0x10                        ; 0054d95c
    INC EBX                             ; 0054d95f
    ADD ESI,0x10                        ; 0054d960
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 0054d963
    MOV dword ptr [ESP + 0x14],ESI      ; 0054d969
    CMP EBX,EDI                         ; 0054d96d
    JGE 0x0054d906                      ; 0054d96f
        ;   XREF to: 0054d906 (CONDITIONAL_JUMP)  ; LAB_0054d906
    JMP 0x0054d93d                      ; 0054d971
        ;   XREF to: 0054d93d (UNCONDITIONAL_JUMP)  ; LAB_0054d93d
    MOV ECX,dword ptr [ESP + 0x30]      ; 0054d973
        ;   Label: LAB_0054d973
    PUSH ECX                            ; 0054d977
    PUSH EAX                            ; 0054d978
    MOV ESI,dword ptr [ESP + 0x44]      ; 0054d979
    PUSH dword ptr [ESP + 0x40]         ; 0054d97d
    PUSH ESI                            ; 0054d981
    PUSH EBX                            ; 0054d982
    CALL dword ptr [ESP + 0x54]         ; 0054d983
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054d987
    FLD float ptr [ESP + 0x2c]          ; 0054d98b
    ADD ESP,0x14                        ; 0054d98f
    SUB ESP,0x4                         ; 0054d992
    MOV EDI,dword ptr [ESP + 0x38]      ; 0054d995
    FSTP float ptr [ESP]                ; 0054d999
    PUSH EDI                            ; 0054d99c
    PUSH EBP                            ; 0054d99d
    LEA ESI,[ESP + 0xc]                 ; 0054d99e
    CALL core_xform.cpp_FUN_00585b20    ; 0054d9a2
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585b20()
    ADD ESP,0xc                         ; 0054d9a7
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054d9aa
    MOV ESI,ESP                         ; 0054d9ae
    LEA EDI,[EDI + 0x6b0]               ; 0054d9b0
    MOVSD ES:EDI,ESI                    ; 0054d9b6
    MOVSD ES:EDI,ESI                    ; 0054d9b7
    MOVSD ES:EDI,ESI                    ; 0054d9b8
    MOVSD ES:EDI,ESI                    ; 0054d9b9
    JMP 0x0054d954                      ; 0054d9ba
        ;   XREF to: 0054d954 (UNCONDITIONAL_JUMP)  ; LAB_0054d954

