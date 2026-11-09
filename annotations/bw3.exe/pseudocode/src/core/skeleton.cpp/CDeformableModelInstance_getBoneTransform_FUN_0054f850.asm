; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850(CDeformableModelInstance *this_ptr,SPose *bone_transform)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPose *          Stack[0x8]:4   bone_transform
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_charactr.cpp_FUN_0042f310 at 0042f3fb
;   core_prye.cpp_FUN_0051e280 at 0051e29a
;   core_thehand.cpp_FUN_0056c140 at 0056c52c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0054f850
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0054f850
    PUSH EBP                            ; 0054f851
    SUB ESP,0x10                        ; 0054f852
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054f855
    MOV EBP,dword ptr [ESP + 0x20]      ; 0054f859
    LEA EAX,[EDI + 0x6a4]               ; 0054f85d
    CMP EBP,EAX                         ; 0054f863
    JZ 0x0054f878                       ; 0054f865
        ;   XREF to: 0054f878 (CONDITIONAL_JUMP)  ; LAB_0054f878
    MOV EDX,dword ptr [EAX]             ; 0054f867
    MOV dword ptr [EBP],EDX             ; 0054f869
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054f86c
    MOV dword ptr [EBP + 0x4],EDX       ; 0054f86f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054f872
    MOV dword ptr [EBP + 0x8],EDX       ; 0054f875
    PUSH EDI                            ; 0054f878
        ;   Label: LAB_0054f878
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054f879
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054f87e
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0054f881
    XOR EDX,EDX                         ; 0054f887
    MOV dword ptr [ESP],EAX             ; 0054f889
    TEST EAX,EAX                        ; 0054f88c
    JLE 0x0054f913                      ; 0054f88e
        ;   XREF to: 0054f913 (CONDITIONAL_JUMP)  ; LAB_0054f913
    PUSH ESI                            ; 0054f894
    PUSH EBX                            ; 0054f895
    MOV dword ptr [ESP + 0x10],EDI      ; 0054f896
    MOV dword ptr [ESP + 0x14],EBP      ; 0054f89a
    MOV EBX,EDI                         ; 0054f89e
    MOV dword ptr [ESP + 0xc],EDI       ; 0054f8a0
    MOV EAX,EBP                         ; 0054f8a4
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054f8a6
        ;   Label: LAB_0054f8a6
    LEA EDI,[EBP + 0xc]                 ; 0054f8aa
    LEA ESI,[ESI + 0x6b0]               ; 0054f8ad
    MOVSD ES:EDI,ESI                    ; 0054f8b3
    MOVSD ES:EDI,ESI                    ; 0054f8b4
    MOVSD ES:EDI,ESI                    ; 0054f8b5
    MOVSD ES:EDI,ESI                    ; 0054f8b6
    ADD EAX,0x30                        ; 0054f8b7
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054f8ba
    MOV ECX,dword ptr [EBX + 0xcf0]     ; 0054f8be
    MOV dword ptr [ESI + 0x64c],ECX     ; 0054f8c4
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054f8ca
    MOV ECX,0xc                         ; 0054f8ce
    LEA EDI,[EAX + 0x7ac]               ; 0054f8d3
    LEA ESI,[ESI + 0xe80]               ; 0054f8d9
    ADD EBX,0x4                         ; 0054f8df
    ADD EBP,0x10                        ; 0054f8e2
    MOVSD.REP ES:EDI,ESI                ; 0054f8e5
    INC EDX                             ; 0054f8e7
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054f8e8
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054f8ec
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054f8f0
    ADD ESI,0x30                        ; 0054f8f4
    ADD EDI,0x4                         ; 0054f8f7
    ADD ECX,0x10                        ; 0054f8fa
    MOV dword ptr [ESP + 0x10],ESI      ; 0054f8fd
    MOV dword ptr [ESP + 0x14],EDI      ; 0054f901
    MOV ESI,dword ptr [ESP + 0x8]       ; 0054f905
    MOV dword ptr [ESP + 0xc],ECX       ; 0054f909
    CMP EDX,ESI                         ; 0054f90d
    JL 0x0054f8a6                       ; 0054f90f
        ;   XREF to: 0054f8a6 (CONDITIONAL_JUMP)  ; LAB_0054f8a6
    POP EBX                             ; 0054f911
    POP ESI                             ; 0054f912
    ADD ESP,0x10                        ; 0054f913
        ;   Label: LAB_0054f913
    POP EBP                             ; 0054f916
    POP EDI                             ; 0054f917
    RET                                 ; 0054f918

