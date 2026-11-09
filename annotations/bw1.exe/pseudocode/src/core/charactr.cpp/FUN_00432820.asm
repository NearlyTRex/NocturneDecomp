; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00432820(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; CVector3f *      Stack[0xc]:4   drop_direction
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_doc.cpp_FUN_00476460 at 0047648e
;   core_stranger.cpp_FUN_00591d80 at 00591dae
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432820
        ;   Label: core_charactr.cpp_FUN_00432820
    PUSH ESI                            ; 00432821
    SUB ESP,0x24                        ; 00432822
    MOV EDX,dword ptr [ESP + 0x30]      ; 00432825
    MOV ESI,dword ptr [ESP + 0x38]      ; 00432829
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043282d
    SHL EAX,0x3                         ; 00432831
    MOV EBX,EAX                         ; 00432834
    SHL EAX,0x4                         ; 00432836
    SUB EAX,EBX                         ; 00432839
    LEA EBX,[EDX + 0x25a8]              ; 0043283b
    ADD EBX,EAX                         ; 00432841
    CMP dword ptr [EBX + 0x8],0x0       ; 00432843
    JZ 0x004328ab                       ; 00432847
        ;   XREF to: 004328ab (CONDITIONAL_JUMP)  ; LAB_004328ab
    TEST ESI,ESI                        ; 00432849
    JZ 0x00432890                       ; 0043284b
        ;   XREF to: 00432890 (CONDITIONAL_JUMP)  ; LAB_00432890
    PUSH EDI                            ; 0043284d
    PUSH ESI                            ; 0043284e
    PUSH EDX                            ; 0043284f
    LEA ESI,[ESP + 0xc]                 ; 00432850
    LEA EDI,[ESP + 0x18]                ; 00432854
    CALL core_actor.cpp_FUN_00408ac0    ; 00432858
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xc]                 ; 0043285d
    LEA EAX,[ESP + 0x18]                ; 00432861
    ADD ESP,0x8                         ; 00432865
    LEA EDX,[ESP + 0x1c]                ; 00432868
    MOVSD ES:EDI,ESI                    ; 0043286c
    MOVSD ES:EDI,ESI                    ; 0043286d
    MOVSD ES:EDI,ESI                    ; 0043286e
    CMP EDX,EAX                         ; 0043286f
    JZ 0x0043288b                       ; 00432871
        ;   XREF to: 0043288b (CONDITIONAL_JUMP)  ; LAB_0043288b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00432873
    MOV dword ptr [ESP + 0x1c],EAX      ; 00432877
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043287b
    MOV dword ptr [ESP + 0x20],EAX      ; 0043287f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00432883
    MOV dword ptr [ESP + 0x24],EAX      ; 00432887
    LEA ESI,[ESP + 0x1c]                ; 0043288b
        ;   Label: LAB_0043288b
    POP EDI                             ; 0043288f
    PUSH ESI                            ; 00432890
        ;   Label: LAB_00432890
    MOV EAX,dword ptr [EBX + 0x8]       ; 00432891
    PUSH EAX                            ; 00432894
    MOV EDX,dword ptr [EAX + 0x154]     ; 00432895
    CALL dword ptr [EDX + 0x8c]         ; 0043289b
    ADD ESP,0x8                         ; 004328a1
    MOV dword ptr [EBX + 0x8],0x0       ; 004328a4
    ADD ESP,0x24                        ; 004328ab
        ;   Label: LAB_004328ab
    POP ESI                             ; 004328ae
    POP EBX                             ; 004328af
    RET                                 ; 004328b0

