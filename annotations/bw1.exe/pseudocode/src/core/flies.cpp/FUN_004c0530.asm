; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_FUN_004c0530(CFlies *this_ptr,int fly_index)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   fly_index
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_flies.cpp_CFlies_setup_FUN_004bfb20 at 004bfb3d
;   core_flies.cpp_FUN_004bfc00 at 004bfea3
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_flies.cpp_FUN_004c0630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0530
        ;   Label: core_flies.cpp_FUN_004c0530
    PUSH ESI                            ; 004c0531
    PUSH EDI                            ; 004c0532
    PUSH EBP                            ; 004c0533
    SUB ESP,0x3c                        ; 004c0534
    MOV EBX,dword ptr [ESP + 0x54]      ; 004c0537
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c053b
    PUSH 0x0                            ; 004c0542
    SUB EAX,EBX                         ; 004c0544
    MOV EDX,dword ptr [ESP + 0x54]      ; 004c0546
    SHL EAX,0x2                         ; 004c054a
    LEA ESI,[ESP + 0x28]                ; 004c054d
    ADD EBX,EAX                         ; 004c0551
    MOV EAX,dword ptr [ESP + 0x54]      ; 004c0553
    SHL EBX,0x2                         ; 004c0557
    ADD EAX,0x168                       ; 004c055a
    PUSH EDX                            ; 004c055f
    ADD EAX,EBX                         ; 004c0560
    LEA EDI,[ESP + 0x8]                 ; 004c0562
    MOV dword ptr [ESP + 0x38],EAX      ; 004c0566
    CALL core_flies.cpp_FUN_004c0630    ; 004c056a
        ;   XREF to: 004c0630 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_FUN_004c0630()
    ADD ESP,0x8                         ; 004c056f
    LEA ESI,[ESP + 0x24]                ; 004c0572
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c0576
    MOV EAX,ESP                         ; 004c057a
    ADD EBX,0x4                         ; 004c057c
    MOVSD ES:EDI,ESI                    ; 004c057f
    MOVSD ES:EDI,ESI                    ; 004c0580
    MOVSD ES:EDI,ESI                    ; 004c0581
    CMP EBX,EAX                         ; 004c0582
    JNZ 0x004c060d                      ; 004c0584
        ;   XREF to: 004c060d (CONDITIONAL_JUMP)  ; LAB_004c060d
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c058a
        ;   Label: LAB_004c058a
    ADD EAX,0x4                         ; 004c058e
    MOV EBX,dword ptr [ESP + 0x30]      ; 004c0591
    MOV EBP,EAX                         ; 004c0595
    ADD EAX,0x24                        ; 004c0597
    ADD EBX,0x10                        ; 004c059a
    MOV dword ptr [ESP + 0x34],EAX      ; 004c059d
    PUSH EBP                            ; 004c05a1
        ;   Label: LAB_004c05a1
    MOV ECX,dword ptr [ESP + 0x54]      ; 004c05a2
    PUSH ECX                            ; 004c05a6
    LEA ESI,[ESP + 0x20]                ; 004c05a7
    LEA EDI,[ESP + 0x14]                ; 004c05ab
    CALL core_flies.cpp_FUN_004c0630    ; 004c05af
        ;   XREF to: 004c0630 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_FUN_004c0630()
    LEA ESI,[ESP + 0x20]                ; 004c05b4
    ADD ESP,0x8                         ; 004c05b8
    LEA EAX,[ESP + 0xc]                 ; 004c05bb
    MOVSD ES:EDI,ESI                    ; 004c05bf
    MOVSD ES:EDI,ESI                    ; 004c05c0
    MOVSD ES:EDI,ESI                    ; 004c05c1
    CMP EBX,EAX                         ; 004c05c2
    JZ 0x004c05da                       ; 004c05c4
        ;   XREF to: 004c05da (CONDITIONAL_JUMP)  ; LAB_004c05da
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c05c6
    MOV dword ptr [EBX],EAX             ; 004c05ca
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c05cc
    MOV dword ptr [EBX + 0x4],EAX       ; 004c05d0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c05d3
    MOV dword ptr [EBX + 0x8],EAX       ; 004c05d7
    MOV ESI,dword ptr [ESP + 0x34]      ; 004c05da
        ;   Label: LAB_004c05da
    ADD EBP,0xc                         ; 004c05de
    ADD EBX,0xc                         ; 004c05e1
    CMP EBP,ESI                         ; 004c05e4
    JNZ 0x004c05a1                      ; 004c05e6
        ;   XREF to: 004c05a1 (CONDITIONAL_JUMP)  ; LAB_004c05a1
    PUSH 0x3f800000                     ; 004c05e8
    PUSH 0x0                            ; 004c05ed
    CALL core_actor.cpp_FUN_0040cc00    ; 004c05ef
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x40],EAX      ; 004c05f4
    FLD float ptr [ESP + 0x40]          ; 004c05f8
    ADD ESP,0x8                         ; 004c05fc
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c05ff
    FSTP float ptr [EAX]                ; 004c0603
    ADD ESP,0x3c                        ; 004c0605
    POP EBP                             ; 004c0608
    POP EDI                             ; 004c0609
    POP ESI                             ; 004c060a
    POP EBX                             ; 004c060b
    RET                                 ; 004c060c
    MOV EAX,dword ptr [ESP]             ; 004c060d
        ;   Label: LAB_004c060d
    MOV dword ptr [EBX],EAX             ; 004c0610
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c0612
    MOV dword ptr [EBX + 0x4],EAX       ; 004c0616
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c0619
    MOV dword ptr [EBX + 0x8],EAX       ; 004c061d
    JMP 0x004c058a                      ; 004c0620
        ;   XREF to: 004c058a (UNCONDITIONAL_JUMP)  ; LAB_004c058a

