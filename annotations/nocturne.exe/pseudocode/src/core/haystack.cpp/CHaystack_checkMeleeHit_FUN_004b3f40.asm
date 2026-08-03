; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CHaystack *this_ptr,int bone_index)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_haystack.cpp_CHaystack_advanceMotion_FUN_004b3e00 at 004b3e3c
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CDemonSet_01e57284.character_count
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3f40
        ;   Label: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40
    PUSH ESI                            ; 004b3f41
    PUSH EDI                            ; 004b3f42
    PUSH EBP                            ; 004b3f43
    SUB ESP,0x54                        ; 004b3f44
    MOV EBP,dword ptr [ESP + 0x68]      ; 004b3f47
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004b3f4b
    PUSH EDX                            ; 004b3f4f
    LEA EAX,[ESP + 0x40]                ; 004b3f50
    PUSH EAX                            ; 004b3f54
    LEA EAX,[EBP + 0x150]               ; 004b3f55
    PUSH EAX                            ; 004b3f5b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004b3f5c
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004b3f61
    PUSH EAX                            ; 004b3f64
    LEA EAX,[ESP + 0x4c]                ; 004b3f65
    PUSH EAX                            ; 004b3f69
    PUSH EBP                            ; 004b3f6a
    XOR EDI,EDI                         ; 004b3f6b
    XOR ESI,ESI                         ; 004b3f6d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b3f6f
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b3f74
    MOV EBX,dword ptr [0x005be368]      ; 004b3f77 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004b3f77
    CMP EDI,dword ptr [EBX + 0x14ecb0]  ; 004b3f7d | g_CDemonSet_01e57284.character_count
    JGE 0x004b3fd1                      ; 004b3f83
        ;   XREF to: 004b3fd1 (CONDITIONAL_JUMP)  ; LAB_004b3fd1
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14ecb4] ; 004b3f85
    CMP EBX,EBP                         ; 004b3f8c
    JNZ 0x004b3f96                      ; 004b3f8e
        ;   XREF to: 004b3f96 (CONDITIONAL_JUMP)  ; LAB_004b3f96
    INC EDI                             ; 004b3f90
        ;   Label: LAB_004b3f90
    ADD ESI,0x4                         ; 004b3f91
    JMP 0x004b3f77                      ; 004b3f94
        ;   XREF to: 004b3f77 (UNCONDITIONAL_JUMP)  ; LAB_004b3f77
    MOV EAX,ESP                         ; 004b3f96
        ;   Label: LAB_004b3f96
    PUSH EAX                            ; 004b3f98
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004b3f99
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    MOV EAX,0x41200000                  ; 004b3f9e
    ADD ESP,0x4                         ; 004b3fa3
    MOV dword ptr [ESP + 0x4],EAX       ; 004b3fa6
    MOV EAX,ESP                         ; 004b3faa
    PUSH EAX                            ; 004b3fac
    MOV dword ptr [ESP + 0x38],EBP      ; 004b3fad
    PUSH 0x3f000000                     ; 004b3fb1
    LEA EAX,[ESP + 0x50]                ; 004b3fb6
    MOV dword ptr [ESP + 0x40],EBP      ; 004b3fba
    PUSH EAX                            ; 004b3fbe
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004b3fbf
    PUSH EBX                            ; 004b3fc5
    CALL dword ptr [EDX + 0xf8]         ; 004b3fc6
    ADD ESP,0x10                        ; 004b3fcc
    JMP 0x004b3f90                      ; 004b3fcf
        ;   XREF to: 004b3f90 (UNCONDITIONAL_JUMP)  ; LAB_004b3f90
    ADD ESP,0x54                        ; 004b3fd1
        ;   Label: LAB_004b3fd1
    POP EBP                             ; 004b3fd4
    POP EDI                             ; 004b3fd5
    POP ESI                             ; 004b3fd6
    POP EBX                             ; 004b3fd7
    RET                                 ; 004b3fd8

