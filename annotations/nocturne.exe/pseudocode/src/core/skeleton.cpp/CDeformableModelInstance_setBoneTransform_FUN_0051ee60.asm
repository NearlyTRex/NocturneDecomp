; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(CDeformableModelInstance *this_ptr,SPose *bone_transform)
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
;   core_charactr.cpp_CCharacter_FUN_004270e0 at 0042723d
;   core_gabriela.cpp_CGabriella_FUN_00499b00 at 00499bb5
;   core_stranger.cpp_CStranger_FUN_005396d0 at 0053979d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0051ee60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
    PUSH EBP                            ; 0051ee61
    SUB ESP,0x10                        ; 0051ee62
    MOV EDI,dword ptr [ESP + 0x20]      ; 0051ee65
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051ee69
    ADD EAX,0x6a4                       ; 0051ee6d
    CMP EAX,EDI                         ; 0051ee72
    JZ 0x0051ee86                       ; 0051ee74
        ;   XREF to: 0051ee86 (CONDITIONAL_JUMP)  ; LAB_0051ee86
    MOV EDX,dword ptr [EDI]             ; 0051ee76
    MOV dword ptr [EAX],EDX             ; 0051ee78
    MOV EDX,dword ptr [EDI + 0x4]       ; 0051ee7a
    MOV dword ptr [EAX + 0x4],EDX       ; 0051ee7d
    MOV EDX,dword ptr [EDI + 0x8]       ; 0051ee80
    MOV dword ptr [EAX + 0x8],EDX       ; 0051ee83
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051ee86
        ;   Label: LAB_0051ee86
    PUSH EDX                            ; 0051ee8a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051ee8b
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051ee90
    MOV EAX,dword ptr [EAX + 0x28558]   ; 0051ee93
    XOR EDX,EDX                         ; 0051ee99
    MOV dword ptr [ESP],EAX             ; 0051ee9b
    TEST EAX,EAX                        ; 0051ee9e
    JLE 0x0051ef29                      ; 0051eea0
        ;   XREF to: 0051ef29 (CONDITIONAL_JUMP)  ; LAB_0051ef29
    PUSH ESI                            ; 0051eea6
    PUSH EBX                            ; 0051eea7
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051eea8
    MOV dword ptr [ESP + 0x10],EDI      ; 0051eeac
    MOV EBX,EDI                         ; 0051eeb0
    MOV dword ptr [ESP + 0xc],EDI       ; 0051eeb2
    MOV dword ptr [ESP + 0x14],EAX      ; 0051eeb6
    MOV EBP,EAX                         ; 0051eeba
    MOV ESI,dword ptr [ESP + 0xc]       ; 0051eebc
        ;   Label: LAB_0051eebc
    LEA EDI,[EBP + 0x6b0]               ; 0051eec0
    LEA ESI,[ESI + 0xc]                 ; 0051eec6
    MOV ECX,0xc                         ; 0051eec9
    MOVSD ES:EDI,ESI                    ; 0051eece
    MOVSD ES:EDI,ESI                    ; 0051eecf
    MOVSD ES:EDI,ESI                    ; 0051eed0
    MOVSD ES:EDI,ESI                    ; 0051eed1
    ADD EAX,0x30                        ; 0051eed2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051eed5
    FLD float ptr [EBX + 0x64c]         ; 0051eed9
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051eedf
    FSTP float ptr [EDI + 0xcf0]        ; 0051eee3
    LEA EDI,[EAX + 0xe50]               ; 0051eee9
    LEA ESI,[ESI + 0x7dc]               ; 0051eeef
    ADD EBX,0x4                         ; 0051eef5
    ADD EBP,0x10                        ; 0051eef8
    MOVSD.REP ES:EDI,ESI                ; 0051eefb
    INC EDX                             ; 0051eefd
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051eefe
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051ef02
    MOV ECX,dword ptr [ESP + 0xc]       ; 0051ef06
    ADD ESI,0x30                        ; 0051ef0a
    ADD EDI,0x4                         ; 0051ef0d
    ADD ECX,0x10                        ; 0051ef10
    MOV dword ptr [ESP + 0x10],ESI      ; 0051ef13
    MOV dword ptr [ESP + 0x14],EDI      ; 0051ef17
    MOV ESI,dword ptr [ESP + 0x8]       ; 0051ef1b
    MOV dword ptr [ESP + 0xc],ECX       ; 0051ef1f
    CMP EDX,ESI                         ; 0051ef23
    JL 0x0051eebc                       ; 0051ef25
        ;   XREF to: 0051eebc (CONDITIONAL_JUMP)  ; LAB_0051eebc
    POP EBX                             ; 0051ef27
    POP ESI                             ; 0051ef28
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051ef29
        ;   Label: LAB_0051ef29
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 0051ef2d
    ADD ESP,0x10                        ; 0051ef37
    POP EBP                             ; 0051ef3a
    POP EDI                             ; 0051ef3b
    RET                                 ; 0051ef3c

