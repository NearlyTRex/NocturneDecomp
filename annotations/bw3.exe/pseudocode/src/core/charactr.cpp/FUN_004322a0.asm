; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_004322a0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_charactr.cpp_FUN_0042b0e0 at 0042b19c
;   core_charactr.cpp_FUN_00433350 at 00433377
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054fa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004322a0
        ;   Label: core_charactr.cpp_FUN_004322a0
    PUSH ESI                            ; 004322a1
    PUSH EDI                            ; 004322a2
    SUB ESP,0x30                        ; 004322a3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004322a6
    LEA EDX,[EBX + 0x158]               ; 004322aa
    LEA EAX,[EBX + 0x24a8]              ; 004322b0
    CMP byte ptr [EAX],0x0              ; 004322b6
    JNZ 0x004322c2                      ; 004322b9
        ;   XREF to: 004322c2 (CONDITIONAL_JUMP)  ; LAB_004322c2
    ADD ESP,0x30                        ; 004322bb
        ;   Label: LAB_004322bb
    POP EDI                             ; 004322be
    POP ESI                             ; 004322bf
    POP EBX                             ; 004322c0
    RET                                 ; 004322c1
    PUSH EDX                            ; 004322c2
        ;   Label: LAB_004322c2
    LEA ESI,[ESP + 0x4]                 ; 004322c3
    LEA EDI,[ESP + 0x1c]                ; 004322c7
    CALL core_skeleton.cpp_FUN_0054fa00 ; 004322cb
        ;   XREF to: 0054fa00 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054fa00()
    MOV ECX,0x6                         ; 004322d0
    LEA ESI,[ESP + 0x4]                 ; 004322d5
    ADD ESP,0x4                         ; 004322d9
    LEA EDX,[EBX + 0x2788]              ; 004322dc
    MOVSD.REP ES:EDI,ESI                ; 004322e2
    LEA EBX,[ESP + 0x18]                ; 004322e4
    MOV ESI,EDX                         ; 004322e8
    CMP EDX,EBX                         ; 004322ea
    JZ 0x00432302                       ; 004322ec
        ;   XREF to: 00432302 (CONDITIONAL_JUMP)  ; LAB_00432302
    MOV EAX,dword ptr [ESP + 0x18]      ; 004322ee
    MOV dword ptr [EDX],EAX             ; 004322f2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004322f4
    MOV dword ptr [EDX + 0x4],EAX       ; 004322f8
    MOV EAX,dword ptr [ESP + 0x20]      ; 004322fb
    MOV dword ptr [EDX + 0x8],EAX       ; 004322ff
    LEA EAX,[EBX + 0xc]                 ; 00432302
        ;   Label: LAB_00432302
    LEA EDX,[ESI + 0xc]                 ; 00432305
    CMP EDX,EAX                         ; 00432308
    JZ 0x004322bb                       ; 0043230a
        ;   XREF to: 004322bb (CONDITIONAL_JUMP)  ; LAB_004322bb
    MOV ECX,dword ptr [EAX]             ; 0043230c
    MOV dword ptr [EDX],ECX             ; 0043230e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00432310
    MOV dword ptr [EDX + 0x4],ECX       ; 00432313
    MOV ECX,dword ptr [EAX + 0x8]       ; 00432316
    MOV dword ptr [EDX + 0x8],ECX       ; 00432319
    ADD ESP,0x30                        ; 0043231c
    POP EDI                             ; 0043231f
    POP ESI                             ; 00432320
    POP EBX                             ; 00432321
    RET                                 ; 00432322

