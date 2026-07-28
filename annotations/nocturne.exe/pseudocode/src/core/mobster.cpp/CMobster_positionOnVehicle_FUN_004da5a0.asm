; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_mobster.cpp_FUN_004da790 at 004db6d7
;
; Referenced Globals:
;   double DOUBLE_0058a2d9 = 1.57079632675000
;   double DOUBLE_0058a2e1 = -1.57079632675000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da5a0
        ;   Label: core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0
    PUSH ESI                            ; 004da5a1
    PUSH EDI                            ; 004da5a2
    SUB ESP,0x30                        ; 004da5a3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004da5a6
    CMP dword ptr [EBX + 0xbd4c],0x0    ; 004da5aa
    JZ 0x004da629                       ; 004da5b1
        ;   XREF to: 004da629 (CONDITIONAL_JUMP)  ; LAB_004da629
    MOV ESI,0xc0166666                  ; 004da5b3
    MOV EDI,0xbfcccccd                  ; 004da5b8
    MOV ECX,0xc00ccccd                  ; 004da5bd
    LEA EDX,[ESP + 0x24]                ; 004da5c2
    LEA EAX,[ESP + 0x18]                ; 004da5c6
    MOV dword ptr [ESP + 0x28],ESI      ; 004da5ca
    MOV dword ptr [ESP + 0x2c],EDI      ; 004da5ce
    MOV dword ptr [ESP + 0x24],ECX      ; 004da5d2
    CMP EAX,EDX                         ; 004da5d6
    JZ 0x004da5e6                       ; 004da5d8
        ;   XREF to: 004da5e6 (CONDITIONAL_JUMP)  ; LAB_004da5e6
    MOV dword ptr [ESP + 0x1c],ESI      ; 004da5da
    MOV dword ptr [ESP + 0x20],EDI      ; 004da5de
    MOV dword ptr [ESP + 0x18],ECX      ; 004da5e2
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 004da5e6
        ;   Label: LAB_004da5e6
    FLD float ptr [EAX + 0x34]          ; 004da5ec
    FADD double ptr [0x0058a2e1]        ; 004da5ef | DOUBLE_0058a2e1
    FSTP float ptr [EBX + 0x34]         ; 004da5f5
        ;   Label: LAB_004da5f5
    LEA EAX,[ESP + 0x18]                ; 004da5f8
    PUSH EAX                            ; 004da5fc
    LEA EAX,[ESP + 0x10]                ; 004da5fd
    PUSH EAX                            ; 004da601
    MOV ECX,dword ptr [EBX + 0xbd48]    ; 004da602
    PUSH ECX                            ; 004da608
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004da609
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 004da60e
    ADD ESP,0xc                         ; 004da610
    FSTP float ptr [EBX + 0x20]         ; 004da613
    MOV EDX,dword ptr [EAX + 0x4]       ; 004da616
    MOV dword ptr [EBX + 0x24],EDX      ; 004da619
    MOV EDX,dword ptr [EAX + 0x8]       ; 004da61c
    MOV dword ptr [EBX + 0x28],EDX      ; 004da61f
    ADD ESP,0x30                        ; 004da622
    POP EDI                             ; 004da625
    POP ESI                             ; 004da626
    POP EBX                             ; 004da627
    RET                                 ; 004da628
    MOV ESI,0xc0166666                  ; 004da629
        ;   Label: LAB_004da629
    MOV EDI,0xbfcccccd                  ; 004da62e
    MOV ECX,0x400ccccd                  ; 004da633
    MOV EAX,ESP                         ; 004da638
    LEA EDX,[ESP + 0x18]                ; 004da63a
    MOV dword ptr [ESP + 0x4],ESI       ; 004da63e
    MOV dword ptr [ESP + 0x8],EDI       ; 004da642
    MOV dword ptr [ESP],ECX             ; 004da646
    CMP EDX,EAX                         ; 004da649
    JZ 0x004da659                       ; 004da64b
        ;   XREF to: 004da659 (CONDITIONAL_JUMP)  ; LAB_004da659
    MOV dword ptr [ESP + 0x1c],ESI      ; 004da64d
    MOV dword ptr [ESP + 0x20],EDI      ; 004da651
    MOV dword ptr [ESP + 0x18],ECX      ; 004da655
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 004da659
        ;   Label: LAB_004da659
    FLD float ptr [EAX + 0x34]          ; 004da65f
    FADD double ptr [0x0058a2d9]        ; 004da662 | DOUBLE_0058a2d9
    JMP 0x004da5f5                      ; 004da668
        ;   XREF to: 004da5f5 (UNCONDITIONAL_JUMP)  ; LAB_004da5f5

