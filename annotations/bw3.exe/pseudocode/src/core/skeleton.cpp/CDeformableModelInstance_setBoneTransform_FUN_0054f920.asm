; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920(CDeformableModelInstance *this_ptr,SPose *bone_transform)
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
;   core_charactr.cpp_FUN_0042f310 at 0042f471
;   core_prye.cpp_FUN_0051e280 at 0051e361
;   core_thehand.cpp_CTheHand_process_FUN_0056c140 at 0056c586
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0054f920
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0054f920
    PUSH EBP                            ; 0054f921
    SUB ESP,0x10                        ; 0054f922
    MOV EDI,dword ptr [ESP + 0x20]      ; 0054f925
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054f929
    ADD EAX,0x6a4                       ; 0054f92d
    CMP EAX,EDI                         ; 0054f932
    JZ 0x0054f946                       ; 0054f934
        ;   XREF to: 0054f946 (CONDITIONAL_JUMP)  ; LAB_0054f946
    MOV EDX,dword ptr [EDI]             ; 0054f936
    MOV dword ptr [EAX],EDX             ; 0054f938
    MOV EDX,dword ptr [EDI + 0x4]       ; 0054f93a
    MOV dword ptr [EAX + 0x4],EDX       ; 0054f93d
    MOV EDX,dword ptr [EDI + 0x8]       ; 0054f940
    MOV dword ptr [EAX + 0x8],EDX       ; 0054f943
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0054f946
        ;   Label: LAB_0054f946
    PUSH EDX                            ; 0054f94a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054f94b
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054f950
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0054f953
    XOR EDX,EDX                         ; 0054f959
    MOV dword ptr [ESP],EAX             ; 0054f95b
    TEST EAX,EAX                        ; 0054f95e
    JLE 0x0054f9e9                      ; 0054f960
        ;   XREF to: 0054f9e9 (CONDITIONAL_JUMP)  ; LAB_0054f9e9
    PUSH ESI                            ; 0054f966
    PUSH EBX                            ; 0054f967
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054f968
    MOV dword ptr [ESP + 0x10],EDI      ; 0054f96c
    MOV EBX,EDI                         ; 0054f970
    MOV dword ptr [ESP + 0xc],EDI       ; 0054f972
    MOV dword ptr [ESP + 0x14],EAX      ; 0054f976
    MOV EBP,EAX                         ; 0054f97a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054f97c
        ;   Label: LAB_0054f97c
    LEA EDI,[EBP + 0x6b0]               ; 0054f980
    LEA ESI,[ESI + 0xc]                 ; 0054f986
    MOV ECX,0xc                         ; 0054f989
    MOVSD ES:EDI,ESI                    ; 0054f98e
    MOVSD ES:EDI,ESI                    ; 0054f98f
    MOVSD ES:EDI,ESI                    ; 0054f990
    MOVSD ES:EDI,ESI                    ; 0054f991
    ADD EAX,0x30                        ; 0054f992
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054f995
    FLD float ptr [EBX + 0x64c]         ; 0054f999
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054f99f
    FSTP float ptr [EDI + 0xcf0]        ; 0054f9a3
    LEA EDI,[EAX + 0xe50]               ; 0054f9a9
    LEA ESI,[ESI + 0x7dc]               ; 0054f9af
    ADD EBX,0x4                         ; 0054f9b5
    ADD EBP,0x10                        ; 0054f9b8
    MOVSD.REP ES:EDI,ESI                ; 0054f9bb
    INC EDX                             ; 0054f9bd
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054f9be
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054f9c2
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054f9c6
    ADD ESI,0x30                        ; 0054f9ca
    ADD EDI,0x4                         ; 0054f9cd
    ADD ECX,0x10                        ; 0054f9d0
    MOV dword ptr [ESP + 0x10],ESI      ; 0054f9d3
    MOV dword ptr [ESP + 0x14],EDI      ; 0054f9d7
    MOV ESI,dword ptr [ESP + 0x8]       ; 0054f9db
    MOV dword ptr [ESP + 0xc],ECX       ; 0054f9df
    CMP EDX,ESI                         ; 0054f9e3
    JL 0x0054f97c                       ; 0054f9e5
        ;   XREF to: 0054f97c (CONDITIONAL_JUMP)  ; LAB_0054f97c
    POP EBX                             ; 0054f9e7
    POP ESI                             ; 0054f9e8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054f9e9
        ;   Label: LAB_0054f9e9
    MOV dword ptr [EAX + 0x2320],0xffffffff ; 0054f9ed
    ADD ESP,0x10                        ; 0054f9f7
    POP EBP                             ; 0054f9fa
    POP EDI                             ; 0054f9fb
    RET                                 ; 0054f9fc

