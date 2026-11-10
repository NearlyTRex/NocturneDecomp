; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(CDeformableModelInstance *this_ptr,SPose *bone_transform)
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
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_00430060 at 004301bd
;   core_doc.cpp_FUN_0046e630 at 0046e711
;   core_gabriela.cpp_FUN_004caff0 at 004cb0c5
;   core_stranger.cpp_FUN_00589f10 at 00589ff1
;   core_thehand.cpp_CTheHand_process_FUN_00599150 at 0059958c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0056ad90
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90
    PUSH EBP                            ; 0056ad91
    SUB ESP,0x10                        ; 0056ad92
    MOV EDI,dword ptr [ESP + 0x20]      ; 0056ad95
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056ad99
    ADD EAX,0x6a4                       ; 0056ad9d
    CMP EAX,EDI                         ; 0056ada2
    JZ 0x0056adb6                       ; 0056ada4
        ;   XREF to: 0056adb6 (CONDITIONAL_JUMP)  ; LAB_0056adb6
    MOV EDX,dword ptr [EDI]             ; 0056ada6
    MOV dword ptr [EAX],EDX             ; 0056ada8
    MOV EDX,dword ptr [EDI + 0x4]       ; 0056adaa
    MOV dword ptr [EAX + 0x4],EDX       ; 0056adad
    MOV EDX,dword ptr [EDI + 0x8]       ; 0056adb0
    MOV dword ptr [EAX + 0x8],EDX       ; 0056adb3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056adb6
        ;   Label: LAB_0056adb6
    PUSH EDX                            ; 0056adba
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056adbb
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056adc0
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0056adc3
    XOR EDX,EDX                         ; 0056adc9
    MOV dword ptr [ESP],EAX             ; 0056adcb
    TEST EAX,EAX                        ; 0056adce
    JLE 0x0056ae59                      ; 0056add0
        ;   XREF to: 0056ae59 (CONDITIONAL_JUMP)  ; LAB_0056ae59
    PUSH ESI                            ; 0056add6
    PUSH EBX                            ; 0056add7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056add8
    MOV dword ptr [ESP + 0x10],EDI      ; 0056addc
    MOV EBX,EDI                         ; 0056ade0
    MOV dword ptr [ESP + 0xc],EDI       ; 0056ade2
    MOV dword ptr [ESP + 0x14],EAX      ; 0056ade6
    MOV EBP,EAX                         ; 0056adea
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056adec
        ;   Label: LAB_0056adec
    LEA EDI,[EBP + 0x6b0]               ; 0056adf0
    LEA ESI,[ESI + 0xc]                 ; 0056adf6
    MOV ECX,0xc                         ; 0056adf9
    MOVSD ES:EDI,ESI                    ; 0056adfe
    MOVSD ES:EDI,ESI                    ; 0056adff
    MOVSD ES:EDI,ESI                    ; 0056ae00
    MOVSD ES:EDI,ESI                    ; 0056ae01
    ADD EAX,0x30                        ; 0056ae02
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056ae05
    FLD float ptr [EBX + 0x64c]         ; 0056ae09
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056ae0f
    FSTP float ptr [EDI + 0xcf0]        ; 0056ae13
    LEA EDI,[EAX + 0xe50]               ; 0056ae19
    LEA ESI,[ESI + 0x7dc]               ; 0056ae1f
    ADD EBX,0x4                         ; 0056ae25
    ADD EBP,0x10                        ; 0056ae28
    MOVSD.REP ES:EDI,ESI                ; 0056ae2b
    INC EDX                             ; 0056ae2d
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056ae2e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056ae32
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056ae36
    ADD ESI,0x30                        ; 0056ae3a
    ADD EDI,0x4                         ; 0056ae3d
    ADD ECX,0x10                        ; 0056ae40
    MOV dword ptr [ESP + 0x10],ESI      ; 0056ae43
    MOV dword ptr [ESP + 0x14],EDI      ; 0056ae47
    MOV ESI,dword ptr [ESP + 0x8]       ; 0056ae4b
    MOV dword ptr [ESP + 0xc],ECX       ; 0056ae4f
    CMP EDX,ESI                         ; 0056ae53
    JL 0x0056adec                       ; 0056ae55
        ;   XREF to: 0056adec (CONDITIONAL_JUMP)  ; LAB_0056adec
    POP EBX                             ; 0056ae57
    POP ESI                             ; 0056ae58
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056ae59
        ;   Label: LAB_0056ae59
    MOV dword ptr [EAX + 0x2320],0xffffffff ; 0056ae5d
    ADD ESP,0x10                        ; 0056ae67
    POP EBP                             ; 0056ae6a
    POP EDI                             ; 0056ae6b
    RET                                 ; 0056ae6c

