; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_special.cpp_FUN_00565a90 at 00565afe
;   engine_special.cpp_setColorTable16_FUN_00565bb0 at 00565bd6
;   wincore_wddvmem.cpp_FUN_0057a5b0 at 0057a74a
;   wincore_wddvmem.cpp_FUN_0057a770 at 0057a873
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_00604e60
;   undefined4 DAT_00604e68
;   undefined4 DAT_00604e70
;   undefined4 DAT_00604e78
;   undefined4 DAT_00604e98
;   undefined4 DAT_00604eb8
;   undefined4 DAT_00604ec0
;   undefined4 DAT_00604ee0
;   undefined4 DAT_00604f00
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af7c
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af84
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4eb0
        ;   Label: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0
    PUSH ESI                            ; 004d4eb1
    PUSH EDI                            ; 004d4eb2
    PUSH EBP                            ; 004d4eb3
    SUB ESP,0x8                         ; 004d4eb4
    CMP dword ptr [0x005fba20],0x10     ; 004d4eb7 | DAT_005fba20
    JNZ 0x004d4fef                      ; 004d4ebe
        ;   XREF to: 004d4fef (CONDITIONAL_JUMP)  ; LAB_004d4fef
    XOR EBX,EBX                         ; 004d4ec4
    XOR ESI,ESI                         ; 004d4ec6
    XOR EAX,EAX                         ; 004d4ec8
        ;   Label: LAB_004d4ec8
    MOV EDI,dword ptr [0x01c6af78]      ; 004d4eca | DAT_01c6af78
    MOV AL,byte ptr [EBX + 0x1c6af98]   ; 004d4ed0 | DAT_01c6af98
    XOR EDX,EDX                         ; 004d4ed6
    MOV dword ptr [ESP],EAX             ; 004d4ed8
    DIV EDI                             ; 004d4edb
    MOVZX EBP,byte ptr [EBX + 0x1c6af99] ; 004d4edd | DAT_01c6af99
    MOV dword ptr [ESP + 0x4],EBP       ; 004d4ee4
    MOV dword ptr [ESP],EAX             ; 004d4ee8
    XOR EDX,EDX                         ; 004d4eeb
    MOV EAX,EBP                         ; 004d4eed
    DIV dword ptr [0x01c6af84]          ; 004d4eef | DAT_01c6af84
    XOR ECX,ECX                         ; 004d4ef5
    MOV CL,byte ptr [EBX + 0x1c6af9a]   ; 004d4ef7 | DAT_01c6af9a
    MOV dword ptr [ESP + 0x4],EAX       ; 004d4efd
    XOR EDX,EDX                         ; 004d4f01
    MOV EAX,ECX                         ; 004d4f03
    DIV dword ptr [0x01c6af90]          ; 004d4f05 | DAT_01c6af90
    MOV EDX,dword ptr [ESP]             ; 004d4f0b
    MOV CL,byte ptr [0x01c6af74]        ; 004d4f0e | DAT_01c6af74
    MOV EDI,EAX                         ; 004d4f14
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d4f16
    SHL EDX,CL                          ; 004d4f1a
    MOV CL,byte ptr [0x01c6af80]        ; 004d4f1c | DAT_01c6af80
    SHL EAX,CL                          ; 004d4f22
    MOV CL,byte ptr [0x01c6af8c]        ; 004d4f24 | DAT_01c6af8c
    OR EDX,EAX                          ; 004d4f2a
    MOV EAX,EDI                         ; 004d4f2c
    SHL EAX,CL                          ; 004d4f2e
    ADD ESI,0x2                         ; 004d4f30
    OR EAX,EDX                          ; 004d4f33
    ADD EBX,0x3                         ; 004d4f35
    MOV word ptr [ESI + 0x1c6a06e],AX   ; 004d4f38
    CMP ESI,0x200                       ; 004d4f3f
    JNZ 0x004d4ec8                      ; 004d4f45
        ;   XREF to: 004d4ec8 (CONDITIONAL_JUMP)  ; LAB_004d4ec8
    MOV EAX,0xff                        ; 004d4f47
    MOV CL,byte ptr [0x01c6af7c]        ; 004d4f4c | DAT_01c6af7c
    SHR EAX,CL                          ; 004d4f52
    MOV ECX,dword ptr [0x01c6af74]      ; 004d4f54 | DAT_01c6af74
    MOV EBX,EAX                         ; 004d4f5a
    SHL EBX,CL                          ; 004d4f5c
    MOV CL,byte ptr [0x01c6af88]        ; 004d4f5e | DAT_01c6af88
    MOV dword ptr [0x00604e60],EBX      ; 004d4f64 | DAT_00604e60
    MOV EBX,0xff                        ; 004d4f6a
    SHR EBX,CL                          ; 004d4f6f
    MOV ECX,dword ptr [0x01c6af80]      ; 004d4f71 | DAT_01c6af80
    MOV ESI,EBX                         ; 004d4f77
    SHL ESI,CL                          ; 004d4f79
    MOV CL,byte ptr [0x01c6af94]        ; 004d4f7b | DAT_01c6af94
    MOV dword ptr [0x00604e68],ESI      ; 004d4f81 | DAT_00604e68
    MOV ESI,0xff                        ; 004d4f87
    SHR ESI,CL                          ; 004d4f8c
    MOV ECX,dword ptr [0x01c6af8c]      ; 004d4f8e | DAT_01c6af8c
    MOV EDI,ESI                         ; 004d4f94
    SHL EDI,CL                          ; 004d4f96
    MOV CL,byte ptr [0x01c6af7c]        ; 004d4f98 | DAT_01c6af7c
    MOV dword ptr [0x00604e70],EDI      ; 004d4f9e | DAT_00604e70
    SHL EAX,CL                          ; 004d4fa4
    MOV CL,byte ptr [0x01c6af88]        ; 004d4fa6 | DAT_01c6af88
    SHL EAX,0x10                        ; 004d4fac
    SHL EBX,CL                          ; 004d4faf
    MOV [0x00604e78],EAX                ; 004d4fb1 | DAT_00604e78
    SHL EBX,0x8                         ; 004d4fb6
    MOV EAX,[0x01c6af7c]                ; 004d4fb9 | DAT_01c6af7c
    MOV dword ptr [0x00604e98],EBX      ; 004d4fbe | DAT_00604e98
    MOV EBX,dword ptr [0x01c6af88]      ; 004d4fc4 | DAT_01c6af88
    MOV ECX,dword ptr [0x01c6af94]      ; 004d4fca | DAT_01c6af94
    ADD EAX,EBX                         ; 004d4fd0
    MOV dword ptr [0x00604f00],ECX      ; 004d4fd2 | DAT_00604f00
    ADD EAX,ECX                         ; 004d4fd8
    SHL ESI,CL                          ; 004d4fda
    MOV [0x00604ec0],EAX                ; 004d4fdc | DAT_00604ec0
    LEA EAX,[EBX + ECX*0x1]             ; 004d4fe1
    MOV dword ptr [0x00604eb8],ESI      ; 004d4fe4 | DAT_00604eb8
    MOV [0x00604ee0],EAX                ; 004d4fea | DAT_00604ee0
    CMP dword ptr [0x005fba20],0x20     ; 004d4fef | DAT_005fba20
        ;   Label: LAB_004d4fef
    JNZ 0x004d504d                      ; 004d4ff6
        ;   XREF to: 004d504d (CONDITIONAL_JUMP)  ; LAB_004d504d
    MOV EDX,dword ptr [0x005fba20]      ; 004d4ff8 | DAT_005fba20
    XOR EAX,EAX                         ; 004d4ffe
    XOR EBX,EBX                         ; 004d5000
    MOVZX EDI,byte ptr [EBX + 0x1c6af99] ; 004d5002 | DAT_01c6af99
        ;   Label: LAB_004d5002
    MOVZX ESI,byte ptr [EBX + 0x1c6af9a] ; 004d5009 | DAT_01c6af9a
    MOVZX EBP,byte ptr [EBX + 0x1c6af98] ; 004d5010 | DAT_01c6af98
    CMP EDX,0x20                        ; 004d5017
    JNZ 0x004d5055                      ; 004d501a
        ;   XREF to: 004d5055 (CONDITIONAL_JUMP)  ; LAB_004d5055
    MOV CL,byte ptr [0x01c6af74]        ; 004d501c | DAT_01c6af74
    SHL EBP,CL                          ; 004d5022
    MOV CL,byte ptr [0x01c6af80]        ; 004d5024 | DAT_01c6af80
    SHL EDI,CL                          ; 004d502a
    MOV CL,byte ptr [0x01c6af8c]        ; 004d502c | DAT_01c6af8c
    SHL ESI,CL                          ; 004d5032
    OR EDI,EBP                          ; 004d5034
    MOV ECX,ESI                         ; 004d5036
    OR ECX,EDI                          ; 004d5038
    ADD EAX,0x4                         ; 004d503a
        ;   Label: LAB_004d503a
    ADD EBX,0x3                         ; 004d503d
    MOV dword ptr [EAX + 0x1c6a26c],ECX ; 004d5040
    CMP EAX,0x400                       ; 004d5046
    JNZ 0x004d5002                      ; 004d504b
        ;   XREF to: 004d5002 (CONDITIONAL_JUMP)  ; LAB_004d5002
    ADD ESP,0x8                         ; 004d504d
        ;   Label: LAB_004d504d
    POP EBP                             ; 004d5050
    POP EDI                             ; 004d5051
    POP ESI                             ; 004d5052
    POP EBX                             ; 004d5053
    RET                                 ; 004d5054
    MOV ECX,EBP                         ; 004d5055
        ;   Label: LAB_004d5055
    SHL EDI,0x8                         ; 004d5057
    SHL ECX,0x10                        ; 004d505a
    OR ECX,EDI                          ; 004d505d
    OR ECX,ESI                          ; 004d505f
    JMP 0x004d503a                      ; 004d5061
        ;   XREF to: 004d503a (UNCONDITIONAL_JUMP)  ; LAB_004d503a

