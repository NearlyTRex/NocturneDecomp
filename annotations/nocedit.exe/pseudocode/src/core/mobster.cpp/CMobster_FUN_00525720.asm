; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mobster_cpp_CMobster_FUN_00525720(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_mobster.cpp_CMobster_process_FUN_00525840 at 005261f4
;
; Referenced Globals:
;   double DOUBLE_00639836 = 1.57079632675000
;   double DOUBLE_0063983e = -1.57079632675000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525720
        ;   Label: core_mobster.cpp_CMobster_FUN_00525720
    PUSH ESI                            ; 00525721
    PUSH EDI                            ; 00525722
    SUB ESP,0x30                        ; 00525723
    MOV EBX,dword ptr [ESP + 0x40]      ; 00525726
    CMP dword ptr [EBX + 0xbee4],0x0    ; 0052572a
    JZ 0x005257c9                       ; 00525731
        ;   XREF to: 005257c9 (CONDITIONAL_JUMP)  ; LAB_005257c9
    MOV ESI,0xc0166666                  ; 00525737
    MOV EDI,0xbfcccccd                  ; 0052573c
    MOV ECX,0xc0866666                  ; 00525741
    MOV EAX,ESP                         ; 00525746
    LEA EDX,[ESP + 0x18]                ; 00525748
    MOV dword ptr [ESP + 0x4],ESI       ; 0052574c
    MOV dword ptr [ESP + 0x8],EDI       ; 00525750
    MOV dword ptr [ESP],ECX             ; 00525754
    CMP EDX,EAX                         ; 00525757
    JZ 0x00525767                       ; 00525759
        ;   XREF to: 00525767 (CONDITIONAL_JUMP)  ; LAB_00525767
    MOV dword ptr [ESP + 0x1c],ESI      ; 0052575b
    MOV dword ptr [ESP + 0x20],EDI      ; 0052575f
    MOV dword ptr [ESP + 0x18],ECX      ; 00525763
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 00525767
        ;   Label: LAB_00525767
    FLD float ptr [EAX + 0x34]          ; 0052576d
    FADD double ptr [0x0063983e]        ; 00525770 | DOUBLE_0063983e
    FSTP float ptr [EBX + 0x34]         ; 00525776
        ;   Label: LAB_00525776
    LEA EAX,[ESP + 0x18]                ; 00525779
    PUSH EAX                            ; 0052577d
    LEA EAX,[ESP + 0x10]                ; 0052577e
    PUSH EAX                            ; 00525782
    MOV ECX,dword ptr [EBX + 0xbee0]    ; 00525783
    PUSH ECX                            ; 00525789
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0052578a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[EBX + 0x20]                ; 0052578f
    FLD float ptr [EAX]                 ; 00525792
    ADD ESP,0xc                         ; 00525794
    FSTP float ptr [EDX]                ; 00525797
    PUSH 0x1                            ; 00525799
    ADD EBX,0x158                       ; 0052579b
    MOV ECX,dword ptr [EAX + 0x4]       ; 005257a1
    MOV dword ptr [EDX + 0x4],ECX       ; 005257a4
    PUSH 0x8                            ; 005257a7
    FLD float ptr [EAX + 0x8]           ; 005257a9
    PUSH EBX                            ; 005257ac
    FSTP float ptr [EDX + 0x8]          ; 005257ad
    MOV dword ptr [EBX + 0xbd88],0x0    ; 005257b0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005257ba
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005257bf
    ADD ESP,0x30                        ; 005257c2
    POP EDI                             ; 005257c5
    POP ESI                             ; 005257c6
    POP EBX                             ; 005257c7
    RET                                 ; 005257c8
    MOV ESI,0xc0166666                  ; 005257c9
        ;   Label: LAB_005257c9
    MOV EDI,0xbfcccccd                  ; 005257ce
    MOV ECX,0x40866666                  ; 005257d3
    LEA EAX,[ESP + 0x24]                ; 005257d8
    LEA EDX,[ESP + 0x18]                ; 005257dc
    MOV dword ptr [ESP + 0x28],ESI      ; 005257e0
    MOV dword ptr [ESP + 0x2c],EDI      ; 005257e4
    MOV dword ptr [ESP + 0x24],ECX      ; 005257e8
    CMP EDX,EAX                         ; 005257ec
    JZ 0x005257fc                       ; 005257ee
        ;   XREF to: 005257fc (CONDITIONAL_JUMP)  ; LAB_005257fc
    MOV dword ptr [ESP + 0x1c],ESI      ; 005257f0
    MOV dword ptr [ESP + 0x20],EDI      ; 005257f4
    MOV dword ptr [ESP + 0x18],ECX      ; 005257f8
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 005257fc
        ;   Label: LAB_005257fc
    FLD float ptr [EAX + 0x34]          ; 00525802
    FADD double ptr [0x00639836]        ; 00525805 | DOUBLE_00639836
    JMP 0x00525776                      ; 0052580b
        ;   XREF to: 00525776 (UNCONDITIONAL_JUMP)  ; LAB_00525776

