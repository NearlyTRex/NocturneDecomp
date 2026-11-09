; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_FUN_004fdc60(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_mobster.cpp_FUN_004fde80 at 004fef19
;
; Referenced Globals:
;   undefined4 DAT_005ded65
;   undefined4 DAT_005ded69
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdc60
        ;   Label: core_mobster.cpp_FUN_004fdc60
    PUSH ESI                            ; 004fdc61
    PUSH EDI                            ; 004fdc62
    SUB ESP,0x3c                        ; 004fdc63
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004fdc66
    CMP dword ptr [EBX + 0x10b20],0x0   ; 004fdc6a
    JZ 0x004fdcff                       ; 004fdc71
        ;   XREF to: 004fdcff (CONDITIONAL_JUMP)  ; LAB_004fdcff
    MOV ESI,0xc0166666                  ; 004fdc77
    MOV EDI,0xbfcccccd                  ; 004fdc7c
    MOV ECX,0xc00ccccd                  ; 004fdc81
    LEA EAX,[ESP + 0x18]                ; 004fdc86
    MOV dword ptr [ESP + 0x10],ESI      ; 004fdc8a
    MOV dword ptr [ESP + 0x14],EDI      ; 004fdc8e
    LEA ESI,[ESP + 0xc]                 ; 004fdc92
    MOV dword ptr [ESP + 0xc],ECX       ; 004fdc96
    CMP EAX,ESI                         ; 004fdc9a
    JZ 0x004fdcaf                       ; 004fdc9c
        ;   XREF to: 004fdcaf (CONDITIONAL_JUMP)  ; LAB_004fdcaf
    MOV EAX,0xc0166666                  ; 004fdc9e
    MOV dword ptr [ESP + 0x20],EDI      ; 004fdca3
    MOV dword ptr [ESP + 0x18],ECX      ; 004fdca7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004fdcab
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004fdcaf
        ;   Label: LAB_004fdcaf
    FLD float ptr [EAX + 0x34]          ; 004fdcb5
    FADD float ptr [0x005ded69]         ; 004fdcb8 | DAT_005ded69
    FSTP float ptr [EBX + 0x34]         ; 004fdcbe
        ;   Label: LAB_004fdcbe
    LEA EAX,[ESP + 0x18]                ; 004fdcc1
    PUSH EAX                            ; 004fdcc5
    MOV ECX,dword ptr [EBX + 0x10b1c]   ; 004fdcc6
    PUSH ECX                            ; 004fdccc
    LEA ESI,[ESP + 0x38]                ; 004fdccd
    LEA EDI,[ESP + 0x8]                 ; 004fdcd1
    CALL core_actor.cpp_FUN_00408d70    ; 004fdcd5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x38]                ; 004fdcda
    ADD ESP,0x8                         ; 004fdcde
    MOVSD ES:EDI,ESI                    ; 004fdce1
    MOVSD ES:EDI,ESI                    ; 004fdce2
    MOVSD ES:EDI,ESI                    ; 004fdce3
    MOV EAX,dword ptr [ESP]             ; 004fdce4
    MOV dword ptr [EBX + 0x20],EAX      ; 004fdce7
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fdcea
    MOV dword ptr [EBX + 0x24],EAX      ; 004fdcee
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fdcf1
    MOV dword ptr [EBX + 0x28],EAX      ; 004fdcf5
    ADD ESP,0x3c                        ; 004fdcf8
    POP EDI                             ; 004fdcfb
    POP ESI                             ; 004fdcfc
    POP EBX                             ; 004fdcfd
    RET                                 ; 004fdcfe
    MOV ESI,0xc0166666                  ; 004fdcff
        ;   Label: LAB_004fdcff
    MOV EDI,0xbfcccccd                  ; 004fdd04
    MOV ECX,0x400ccccd                  ; 004fdd09
    LEA EAX,[ESP + 0x24]                ; 004fdd0e
    MOV dword ptr [ESP + 0x28],ESI      ; 004fdd12
    MOV dword ptr [ESP + 0x2c],EDI      ; 004fdd16
    LEA ESI,[ESP + 0x18]                ; 004fdd1a
    MOV dword ptr [ESP + 0x24],ECX      ; 004fdd1e
    CMP ESI,EAX                         ; 004fdd22
    JZ 0x004fdd37                       ; 004fdd24
        ;   XREF to: 004fdd37 (CONDITIONAL_JUMP)  ; LAB_004fdd37
    MOV EAX,0xc0166666                  ; 004fdd26
    MOV dword ptr [ESP + 0x20],EDI      ; 004fdd2b
    MOV dword ptr [ESP + 0x18],ECX      ; 004fdd2f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004fdd33
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004fdd37
        ;   Label: LAB_004fdd37
    FLD float ptr [EAX + 0x34]          ; 004fdd3d
    FADD float ptr [0x005ded65]         ; 004fdd40 | DAT_005ded65
    JMP 0x004fdcbe                      ; 004fdd46
        ;   XREF to: 004fdcbe (UNCONDITIONAL_JUMP)  ; LAB_004fdcbe

