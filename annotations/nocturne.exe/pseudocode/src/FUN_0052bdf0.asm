; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052bdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_005bed30
;   undefined4 DAT_02dc9224
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0052bdf0
        ;   Label: FUN_0052bdf0
    MOV EDX,dword ptr [0x02dc9224]      ; 0052bdf3 | DAT_02dc9224
    TEST EDX,EDX                        ; 0052bdf9
    JNZ 0x0052be01                      ; 0052bdfb
        ;   XREF to: 0052be01 (CONDITIONAL_JUMP)  ; LAB_0052be01
    ADD ESP,0x10                        ; 0052bdfd
    RET                                 ; 0052be00
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052be01
        ;   Label: LAB_0052be01
    PUSH 0x10                           ; 0052be05
    MOV dword ptr [ESP + 0x8],EAX       ; 0052be07
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052be0b
    XOR ECX,ECX                         ; 0052be0f
    MOV dword ptr [ESP + 0xc],EAX       ; 0052be11
    MOV EAX,dword ptr [ESP + 0x24]      ; 0052be15
    MOV dword ptr [ESP + 0x4],ECX       ; 0052be19
    MOV dword ptr [ESP + 0x10],EAX      ; 0052be1d
    MOV EAX,EDX                         ; 0052be21
    MOV ECX,dword ptr [EDX]             ; 0052be23
    LEA EDX,[ESP + 0x4]                 ; 0052be25
    PUSH EDX                            ; 0052be29
    PUSH 0x0                            ; 0052be2a
    PUSH 0x0                            ; 0052be2c
    PUSH 0x0                            ; 0052be2e
    PUSH 0x5bed30                       ; 0052be30 | DAT_005bed30
    PUSH EAX                            ; 0052be35
    CALL dword ptr [ECX + 0x10]         ; 0052be36
    ADD ESP,0x10                        ; 0052be39
    RET                                 ; 0052be3c

