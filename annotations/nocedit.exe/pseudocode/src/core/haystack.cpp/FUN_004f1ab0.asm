; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_haystack_cpp_FUN_004f1ab0(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_haystack.cpp_FUN_004f1970 at 004f19e5
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
;   undefined4 DAT_03263318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1ab0
        ;   Label: core_haystack.cpp_FUN_004f1ab0
    PUSH ESI                            ; 004f1ab1
    PUSH EDI                            ; 004f1ab2
    PUSH EBP                            ; 004f1ab3
    SUB ESP,0x54                        ; 004f1ab4
    MOV EBP,dword ptr [ESP + 0x68]      ; 004f1ab7
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004f1abb
    PUSH EDX                            ; 004f1abf
    LEA EAX,[ESP + 0x40]                ; 004f1ac0
    PUSH EAX                            ; 004f1ac4
    LEA EAX,[EBP + 0x158]               ; 004f1ac5
    PUSH EAX                            ; 004f1acb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f1acc
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f1ad1
    PUSH EAX                            ; 004f1ad4
    LEA EAX,[ESP + 0x4c]                ; 004f1ad5
    PUSH EAX                            ; 004f1ad9
    PUSH EBP                            ; 004f1ada
    XOR EDI,EDI                         ; 004f1adb
    XOR ESI,ESI                         ; 004f1add
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f1adf
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f1ae4
    MOV EBX,dword ptr [0x006810c8]      ; 004f1ae7 | g_CDemonSetPtr
        ;   Label: LAB_004f1ae7
    CMP EDI,dword ptr [EBX + 0x14f098]  ; 004f1aed | g_CDemonSetInstance.damage_listener_count
    JGE 0x004f1b41                      ; 004f1af3
        ;   XREF to: 004f1b41 (CONDITIONAL_JUMP)  ; LAB_004f1b41
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f09c] ; 004f1af5 | g_CDemonSetInstance.damage_listeners | DAT_03263318
    CMP EBX,EBP                         ; 004f1afc
    JNZ 0x004f1b06                      ; 004f1afe
        ;   XREF to: 004f1b06 (CONDITIONAL_JUMP)  ; LAB_004f1b06
    INC EDI                             ; 004f1b00
        ;   Label: LAB_004f1b00
    ADD ESI,0x4                         ; 004f1b01
    JMP 0x004f1ae7                      ; 004f1b04
        ;   XREF to: 004f1ae7 (UNCONDITIONAL_JUMP)  ; LAB_004f1ae7
    MOV EAX,ESP                         ; 004f1b06
        ;   Label: LAB_004f1b06
    PUSH EAX                            ; 004f1b08
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004f1b09
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,0x41200000                  ; 004f1b0e
    ADD ESP,0x4                         ; 004f1b13
    MOV dword ptr [ESP + 0x4],EAX       ; 004f1b16
    MOV EAX,ESP                         ; 004f1b1a
    PUSH EAX                            ; 004f1b1c
    MOV dword ptr [ESP + 0x38],EBP      ; 004f1b1d
    PUSH 0x3f000000                     ; 004f1b21
    LEA EAX,[ESP + 0x50]                ; 004f1b26
    MOV dword ptr [ESP + 0x40],EBP      ; 004f1b2a
    PUSH EAX                            ; 004f1b2e
    MOV EDX,dword ptr [EBX + 0x154]     ; 004f1b2f
    PUSH EBX                            ; 004f1b35
    CALL dword ptr [EDX + 0x114]        ; 004f1b36
    ADD ESP,0x10                        ; 004f1b3c
    JMP 0x004f1b00                      ; 004f1b3f
        ;   XREF to: 004f1b00 (UNCONDITIONAL_JUMP)  ; LAB_004f1b00
    ADD ESP,0x54                        ; 004f1b41
        ;   Label: LAB_004f1b41
    POP EBP                             ; 004f1b44
    POP EDI                             ; 004f1b45
    POP ESI                             ; 004f1b46
    POP EBX                             ; 004f1b47
    RET                                 ; 004f1b48

