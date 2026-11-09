; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPose * __cdecl core_skeleton_cpp_FUN_00548620(CDeformableModelInstance *this_ptr,SPose *bone_transform)
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
; XREF[5]:
;   core_charactr.cpp_FUN_00426730 at 004267e3
;   core_doc.cpp_FUN_00455170 at 0045518a
;   core_gabriela.cpp_FUN_004b20d0 at 004b20ee
;   core_moloch.cpp_FUN_00501530 at 00501b6d
;   core_stranger.cpp_FUN_00567430 at 0056744a
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00548620
        ;   Label: core_skeleton.cpp_FUN_00548620
    PUSH EBP                            ; 00548621
    SUB ESP,0x10                        ; 00548622
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00548625
    MOV EBP,dword ptr [ESP + 0x20]      ; 00548629
    LEA EAX,[EDI + 0x6a4]               ; 0054862d
    CMP EBP,EAX                         ; 00548633
    JZ 0x00548648                       ; 00548635
        ;   XREF to: 00548648 (CONDITIONAL_JUMP)  ; LAB_00548648
    MOV EDX,dword ptr [EAX]             ; 00548637
    MOV dword ptr [EBP],EDX             ; 00548639
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054863c
    MOV dword ptr [EBP + 0x4],EDX       ; 0054863f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00548642
    MOV dword ptr [EBP + 0x8],EDX       ; 00548645
    PUSH EDI                            ; 00548648
        ;   Label: LAB_00548648
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00548649
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054864e
    MOV EAX,dword ptr [EAX + 0x1d1f8]   ; 00548651
    XOR EDX,EDX                         ; 00548657
    MOV dword ptr [ESP],EAX             ; 00548659
    TEST EAX,EAX                        ; 0054865c
    JLE 0x005486e3                      ; 0054865e
        ;   XREF to: 005486e3 (CONDITIONAL_JUMP)  ; LAB_005486e3
    PUSH ESI                            ; 00548664
    PUSH EBX                            ; 00548665
    MOV dword ptr [ESP + 0x10],EDI      ; 00548666
    MOV dword ptr [ESP + 0x14],EBP      ; 0054866a
    MOV EBX,EDI                         ; 0054866e
    MOV dword ptr [ESP + 0xc],EDI       ; 00548670
    MOV EAX,EBP                         ; 00548674
    MOV ESI,dword ptr [ESP + 0xc]       ; 00548676
        ;   Label: LAB_00548676
    LEA EDI,[EBP + 0xc]                 ; 0054867a
    LEA ESI,[ESI + 0x6b0]               ; 0054867d
    MOVSD ES:EDI,ESI                    ; 00548683
    MOVSD ES:EDI,ESI                    ; 00548684
    MOVSD ES:EDI,ESI                    ; 00548685
    MOVSD ES:EDI,ESI                    ; 00548686
    ADD EAX,0x30                        ; 00548687
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054868a
    MOV ECX,dword ptr [EBX + 0xcf0]     ; 0054868e
    MOV dword ptr [ESI + 0x64c],ECX     ; 00548694
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054869a
    MOV ECX,0xc                         ; 0054869e
    LEA EDI,[EAX + 0x7ac]               ; 005486a3
    LEA ESI,[ESI + 0xe80]               ; 005486a9
    ADD EBX,0x4                         ; 005486af
    ADD EBP,0x10                        ; 005486b2
    MOVSD.REP ES:EDI,ESI                ; 005486b5
    INC EDX                             ; 005486b7
    MOV ESI,dword ptr [ESP + 0x10]      ; 005486b8
    MOV EDI,dword ptr [ESP + 0x14]      ; 005486bc
    MOV ECX,dword ptr [ESP + 0xc]       ; 005486c0
    ADD ESI,0x30                        ; 005486c4
    ADD EDI,0x4                         ; 005486c7
    ADD ECX,0x10                        ; 005486ca
    MOV dword ptr [ESP + 0x10],ESI      ; 005486cd
    MOV dword ptr [ESP + 0x14],EDI      ; 005486d1
    MOV ESI,dword ptr [ESP + 0x8]       ; 005486d5
    MOV dword ptr [ESP + 0xc],ECX       ; 005486d9
    CMP EDX,ESI                         ; 005486dd
    JL 0x00548676                       ; 005486df
        ;   XREF to: 00548676 (CONDITIONAL_JUMP)  ; LAB_00548676
    POP EBX                             ; 005486e1
    POP ESI                             ; 005486e2
    ADD ESP,0x10                        ; 005486e3
        ;   Label: LAB_005486e3
    POP EBP                             ; 005486e6
    POP EDI                             ; 005486e7
    RET                                 ; 005486e8

