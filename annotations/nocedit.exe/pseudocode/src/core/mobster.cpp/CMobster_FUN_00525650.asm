; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_FUN_00525650(CMobster *this_ptr)
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
;   core_mobster.cpp_CMobster_process_FUN_00525840 at 0052587a
;
; Referenced Globals:
;   double DOUBLE_00639826 = 1.57079632675000
;   double DOUBLE_0063982e = -1.57079632675000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525650
        ;   Label: core_mobster.cpp_CMobster_FUN_00525650
    PUSH ESI                            ; 00525651
    PUSH EDI                            ; 00525652
    SUB ESP,0x30                        ; 00525653
    MOV EBX,dword ptr [ESP + 0x40]      ; 00525656
    CMP dword ptr [EBX + 0xbee4],0x0    ; 0052565a
    JZ 0x005256d9                       ; 00525661
        ;   XREF to: 005256d9 (CONDITIONAL_JUMP)  ; LAB_005256d9
    MOV ESI,0xc0166666                  ; 00525663
    MOV EDI,0xbfcccccd                  ; 00525668
    MOV ECX,0xc00ccccd                  ; 0052566d
    LEA EDX,[ESP + 0x24]                ; 00525672
    LEA EAX,[ESP + 0x18]                ; 00525676
    MOV dword ptr [ESP + 0x28],ESI      ; 0052567a
    MOV dword ptr [ESP + 0x2c],EDI      ; 0052567e
    MOV dword ptr [ESP + 0x24],ECX      ; 00525682
    CMP EAX,EDX                         ; 00525686
    JZ 0x00525696                       ; 00525688
        ;   XREF to: 00525696 (CONDITIONAL_JUMP)  ; LAB_00525696
    MOV dword ptr [ESP + 0x1c],ESI      ; 0052568a
    MOV dword ptr [ESP + 0x20],EDI      ; 0052568e
    MOV dword ptr [ESP + 0x18],ECX      ; 00525692
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 00525696
        ;   Label: LAB_00525696
    FLD float ptr [EAX + 0x34]          ; 0052569c
    FADD double ptr [0x0063982e]        ; 0052569f | DOUBLE_0063982e
    FSTP float ptr [EBX + 0x34]         ; 005256a5
        ;   Label: LAB_005256a5
    LEA EAX,[ESP + 0x18]                ; 005256a8
    PUSH EAX                            ; 005256ac
    LEA EAX,[ESP + 0x10]                ; 005256ad
    PUSH EAX                            ; 005256b1
    MOV ECX,dword ptr [EBX + 0xbee0]    ; 005256b2
    PUSH ECX                            ; 005256b8
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005256b9
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 005256be
    ADD ESP,0xc                         ; 005256c0
    FSTP float ptr [EBX + 0x20]         ; 005256c3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005256c6
    MOV dword ptr [EBX + 0x24],EDX      ; 005256c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 005256cc
    MOV dword ptr [EBX + 0x28],EDX      ; 005256cf
    ADD ESP,0x30                        ; 005256d2
    POP EDI                             ; 005256d5
    POP ESI                             ; 005256d6
    POP EBX                             ; 005256d7
    RET                                 ; 005256d8
    MOV ESI,0xc0166666                  ; 005256d9
        ;   Label: LAB_005256d9
    MOV EDI,0xbfcccccd                  ; 005256de
    MOV ECX,0x400ccccd                  ; 005256e3
    MOV EAX,ESP                         ; 005256e8
    LEA EDX,[ESP + 0x18]                ; 005256ea
    MOV dword ptr [ESP + 0x4],ESI       ; 005256ee
    MOV dword ptr [ESP + 0x8],EDI       ; 005256f2
    MOV dword ptr [ESP],ECX             ; 005256f6
    CMP EDX,EAX                         ; 005256f9
    JZ 0x00525709                       ; 005256fb
        ;   XREF to: 00525709 (CONDITIONAL_JUMP)  ; LAB_00525709
    MOV dword ptr [ESP + 0x1c],ESI      ; 005256fd
    MOV dword ptr [ESP + 0x20],EDI      ; 00525701
    MOV dword ptr [ESP + 0x18],ECX      ; 00525705
    MOV EAX,dword ptr [EBX + 0xbee0]    ; 00525709
        ;   Label: LAB_00525709
    FLD float ptr [EAX + 0x34]          ; 0052570f
    FADD double ptr [0x00639826]        ; 00525712 | DOUBLE_00639826
    JMP 0x005256a5                      ; 00525718
        ;   XREF to: 005256a5 (UNCONDITIONAL_JUMP)  ; LAB_005256a5

