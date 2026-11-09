; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPose * __cdecl core_skeleton_cpp_FUN_0056acc0(CDeformableModelInstance *this_ptr,SPose *bone_transform)
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
; XREF[6]:
;   core_charactr.cpp_FUN_00430060 at 00430113
;   core_doc.cpp_FUN_0046e630 at 0046e64a
;   core_gabriela.cpp_FUN_004caff0 at 004cb00e
;   core_moloch.cpp_FUN_005204e0 at 00520b1d
;   core_stranger.cpp_FUN_00589f10 at 00589f2a
;   core_thehand.cpp_FUN_00599150 at 00599535
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0056acc0
        ;   Label: core_skeleton.cpp_FUN_0056acc0
    PUSH EBP                            ; 0056acc1
    SUB ESP,0x10                        ; 0056acc2
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0056acc5
    MOV EBP,dword ptr [ESP + 0x20]      ; 0056acc9
    LEA EAX,[EDI + 0x6a4]               ; 0056accd
    CMP EBP,EAX                         ; 0056acd3
    JZ 0x0056ace8                       ; 0056acd5
        ;   XREF to: 0056ace8 (CONDITIONAL_JUMP)  ; LAB_0056ace8
    MOV EDX,dword ptr [EAX]             ; 0056acd7
    MOV dword ptr [EBP],EDX             ; 0056acd9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0056acdc
    MOV dword ptr [EBP + 0x4],EDX       ; 0056acdf
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056ace2
    MOV dword ptr [EBP + 0x8],EDX       ; 0056ace5
    PUSH EDI                            ; 0056ace8
        ;   Label: LAB_0056ace8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056ace9
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056acee
    MOV EAX,dword ptr [EAX + 0x1de78]   ; 0056acf1
    XOR EDX,EDX                         ; 0056acf7
    MOV dword ptr [ESP],EAX             ; 0056acf9
    TEST EAX,EAX                        ; 0056acfc
    JLE 0x0056ad83                      ; 0056acfe
        ;   XREF to: 0056ad83 (CONDITIONAL_JUMP)  ; LAB_0056ad83
    PUSH ESI                            ; 0056ad04
    PUSH EBX                            ; 0056ad05
    MOV dword ptr [ESP + 0x10],EDI      ; 0056ad06
    MOV dword ptr [ESP + 0x14],EBP      ; 0056ad0a
    MOV EBX,EDI                         ; 0056ad0e
    MOV dword ptr [ESP + 0xc],EDI       ; 0056ad10
    MOV EAX,EBP                         ; 0056ad14
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056ad16
        ;   Label: LAB_0056ad16
    LEA EDI,[EBP + 0xc]                 ; 0056ad1a
    LEA ESI,[ESI + 0x6b0]               ; 0056ad1d
    MOVSD ES:EDI,ESI                    ; 0056ad23
    MOVSD ES:EDI,ESI                    ; 0056ad24
    MOVSD ES:EDI,ESI                    ; 0056ad25
    MOVSD ES:EDI,ESI                    ; 0056ad26
    ADD EAX,0x30                        ; 0056ad27
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056ad2a
    MOV ECX,dword ptr [EBX + 0xcf0]     ; 0056ad2e
    MOV dword ptr [ESI + 0x64c],ECX     ; 0056ad34
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056ad3a
    MOV ECX,0xc                         ; 0056ad3e
    LEA EDI,[EAX + 0x7ac]               ; 0056ad43
    LEA ESI,[ESI + 0xe80]               ; 0056ad49
    ADD EBX,0x4                         ; 0056ad4f
    ADD EBP,0x10                        ; 0056ad52
    MOVSD.REP ES:EDI,ESI                ; 0056ad55
    INC EDX                             ; 0056ad57
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056ad58
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056ad5c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056ad60
    ADD ESI,0x30                        ; 0056ad64
    ADD EDI,0x4                         ; 0056ad67
    ADD ECX,0x10                        ; 0056ad6a
    MOV dword ptr [ESP + 0x10],ESI      ; 0056ad6d
    MOV dword ptr [ESP + 0x14],EDI      ; 0056ad71
    MOV ESI,dword ptr [ESP + 0x8]       ; 0056ad75
    MOV dword ptr [ESP + 0xc],ECX       ; 0056ad79
    CMP EDX,ESI                         ; 0056ad7d
    JL 0x0056ad16                       ; 0056ad7f
        ;   XREF to: 0056ad16 (CONDITIONAL_JUMP)  ; LAB_0056ad16
    POP EBX                             ; 0056ad81
    POP ESI                             ; 0056ad82
    ADD ESP,0x10                        ; 0056ad83
        ;   Label: LAB_0056ad83
    POP EBP                             ; 0056ad86
    POP EDI                             ; 0056ad87
    RET                                 ; 0056ad88

