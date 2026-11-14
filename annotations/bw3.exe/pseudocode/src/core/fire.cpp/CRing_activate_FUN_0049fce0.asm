; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CRing_activate_FUN_0049fce0(CRing *this_ptr,undefined4 *param_2,int param_3,CCharacter *param_4)
;
; Parameters:
; CRing *          Stack[0x4]:4   this_ptr
; undefined4 *     Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createRing_FUN_004a3f70 at 004a3f9d
;
; Referenced Globals:
;   undefined4 DAT_005c0900
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_FUN_0053bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049fce0
        ;   Label: core_fire.cpp_CRing_activate_FUN_0049fce0
    PUSH ESI                            ; 0049fce1
    PUSH EDI                            ; 0049fce2
    PUSH EBP                            ; 0049fce3
    MOV EBP,ESP                         ; 0049fce4
    SUB ESP,0x10                        ; 0049fce6
    AND ESP,0xfffffff8                  ; 0049fce9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049fcec
    MOV ECX,dword ptr [EBP + 0x18]      ; 0049fcef
    LEA EDX,[EDI + 0x4]                 ; 0049fcf2
    CMP EDX,ECX                         ; 0049fcf5
    JZ 0x0049fd09                       ; 0049fcf7
        ;   XREF to: 0049fd09 (CONDITIONAL_JUMP)  ; LAB_0049fd09
    MOV EAX,dword ptr [ECX]             ; 0049fcf9
    MOV dword ptr [EDX],EAX             ; 0049fcfb
    MOV EAX,dword ptr [ECX + 0x4]       ; 0049fcfd
    MOV dword ptr [EDX + 0x4],EAX       ; 0049fd00
    MOV EAX,dword ptr [ECX + 0x8]       ; 0049fd03
    MOV dword ptr [EDX + 0x8],EAX       ; 0049fd06
    LEA EDX,[EDI + 0x4]                 ; 0049fd09
        ;   Label: LAB_0049fd09
    PUSH 0x0                            ; 0049fd0c
    PUSH EDX                            ; 0049fd0e
    MOV EDX,dword ptr [0x00603b28]      ; 0049fd0f | g_CDemonSetPtr
    PUSH EDX                            ; 0049fd15 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053bc80 ; 0049fd16
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053bc80()
    MOV dword ptr [ESP + 0x18],EAX      ; 0049fd1b
    FLD float ptr [ESP + 0x18]          ; 0049fd1f
    ADD ESP,0xc                         ; 0049fd23
    MOV ECX,dword ptr [0x00603b28]      ; 0049fd26 | g_CDemonSetPtr
    PUSH ECX                            ; 0049fd2c | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xc]          ; 0049fd2d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0049fd31
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049fd36
    FLD float ptr [EDI + 0x8]           ; 0049fd39
    FSUB float ptr [ESP + 0x8]          ; 0049fd3c
    FLD1                                ; 0049fd40
    FCOMPP                              ; 0049fd42
    FNSTSW AX                           ; 0049fd44
    SAHF                                ; 0049fd46
    JA 0x0049fddc                       ; 0049fd47
        ;   XREF to: 0049fddc (CONDITIONAL_JUMP)  ; LAB_0049fddc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0049fd4d
        ;   Label: LAB_0049fd4d
    MOV dword ptr [EDI],EDX             ; 0049fd50
    MOV EDX,dword ptr [EBP + 0x20]      ; 0049fd52
    MOV dword ptr [EDI + 0x2c],EDX      ; 0049fd55
    LEA EDX,[EDI + 0x30]                ; 0049fd58
    LEA ESI,[EDI + 0x4]                 ; 0049fd5b
    XOR EBX,EBX                         ; 0049fd5e
    MOV ECX,EDI                         ; 0049fd60
    CMP EDX,ESI                         ; 0049fd62
        ;   Label: LAB_0049fd62
    JZ 0x0049fd76                       ; 0049fd64
        ;   XREF to: 0049fd76 (CONDITIONAL_JUMP)  ; LAB_0049fd76
    MOV EAX,dword ptr [ESI]             ; 0049fd66
    MOV dword ptr [EDX],EAX             ; 0049fd68
    MOV EAX,dword ptr [ESI + 0x4]       ; 0049fd6a
    MOV dword ptr [EDX + 0x4],EAX       ; 0049fd6d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0049fd70
    MOV dword ptr [EDX + 0x8],EAX       ; 0049fd73
    MOV dword ptr [ESP + 0xc],EBX       ; 0049fd76
        ;   Label: LAB_0049fd76
    FILD dword ptr [ESP + 0xc]          ; 0049fd7a
    FMUL double ptr [0x005c0900]        ; 0049fd7e | DAT_005c0900
    FLD ST0                             ; 0049fd84
    FCOS                                ; 0049fd86
    FXCH                                ; 0049fd88
    FSIN                                ; 0049fd8a
    ADD ECX,0xc                         ; 0049fd8c
    ADD EDX,0xc                         ; 0049fd8f
    MOV dword ptr [ECX + 0xe8],0x0      ; 0049fd92
    INC EBX                             ; 0049fd9c
    FXCH                                ; 0049fd9d
    FSTP float ptr [ECX + 0xe4]         ; 0049fd9f
    FSTP float ptr [ECX + 0xec]         ; 0049fda5
    CMP EBX,0x10                        ; 0049fdab
    JL 0x0049fd62                       ; 0049fdae
        ;   XREF to: 0049fd62 (CONDITIONAL_JUMP)  ; LAB_0049fd62
    MOV dword ptr [EDI + 0x1b0],0x3d4ccccd ; 0049fdb0
    MOV dword ptr [EDI + 0x1b4],0x0     ; 0049fdba
    MOV dword ptr [EDI + 0x1e0],0x0     ; 0049fdc4
    MOV dword ptr [EDI + 0x14],0x40000000 ; 0049fdce
    MOV ESP,EBP                         ; 0049fdd5
    POP EBP                             ; 0049fdd7
    POP EDI                             ; 0049fdd8
    POP ESI                             ; 0049fdd9
    POP EBX                             ; 0049fdda
    RET                                 ; 0049fddb
    FLD1                                ; 0049fddc
        ;   Label: LAB_0049fddc
    FADD float ptr [ESP + 0x8]          ; 0049fdde
    FSTP float ptr [EDI + 0x8]          ; 0049fde2
    JMP 0x0049fd4d                      ; 0049fde5
        ;   XREF to: 0049fd4d (UNCONDITIONAL_JUMP)  ; LAB_0049fd4d

