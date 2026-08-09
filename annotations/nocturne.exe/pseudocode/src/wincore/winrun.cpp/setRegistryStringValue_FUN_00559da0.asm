; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_00559da0(char *key_path,char *value_name,char *value_data)
;
; Parameters:
; char *           Stack[0x4]:4   key_path
; char *           Stack[0x8]:4   value_name
; char *           Stack[0xc]:4   value_data
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c8d61
;
; Referenced Globals:
;   void* PTR_RegCloseKey_00575380 = 001756a6
;   void* PTR_RegCreateKeyExA_00575384 = 001756b4
;   void* PTR_RegSetValueExA_00575390 = 001756ea
;   TerminatedCString s_suck_00598151
;
; Called Functions:
;   RegCloseKey
;   RegCreateKeyExA
;   RegSetValueExA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559da0
        ;   Label: wincore_winrun.cpp_setRegistryStringValue_FUN_00559da0
    SUB ESP,0x8                         ; 00559da1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00559da4
    LEA EAX,[ESP + 0x4]                 ; 00559da8
    PUSH EAX                            ; 00559dac
    LEA EAX,[ESP + 0x4]                 ; 00559dad
    PUSH EAX                            ; 00559db1
    PUSH 0x0                            ; 00559db2
    PUSH 0x20006                        ; 00559db4
    PUSH 0x0                            ; 00559db9
    PUSH 0x598151                       ; 00559dbb | = "suck"
    PUSH 0x0                            ; 00559dc0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00559dc2
    PUSH EDX                            ; 00559dc6
    PUSH 0x80000002                     ; 00559dc7
    CALL dword ptr CS:[0x575384]        ; 00559dcc | PTR_RegCreateKeyExA_00575384
    TEST EAX,EAX                        ; 00559dd3
    JZ 0x00559ddc                       ; 00559dd5
        ;   XREF to: 00559ddc (CONDITIONAL_JUMP)  ; LAB_00559ddc
    ADD ESP,0x8                         ; 00559dd7
    POP EBX                             ; 00559dda
    RET                                 ; 00559ddb
    PUSH EDI                            ; 00559ddc
        ;   Label: LAB_00559ddc
    PUSH ESI                            ; 00559ddd
    MOV EDI,EBX                         ; 00559dde
    SUB ECX,ECX                         ; 00559de0
    DEC ECX                             ; 00559de2
    XOR EAX,EAX                         ; 00559de3
    SCASB.REPNE ES:EDI                  ; 00559de5
    NOT ECX                             ; 00559de7
    DEC ECX                             ; 00559de9
    INC ECX                             ; 00559dea
    PUSH ECX                            ; 00559deb
    PUSH EBX                            ; 00559dec
    PUSH 0x1                            ; 00559ded
    PUSH 0x0                            ; 00559def
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00559df1
    PUSH ECX                            ; 00559df5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00559df6
    PUSH EBX                            ; 00559dfa
    CALL dword ptr CS:[0x575390]        ; 00559dfb | PTR_RegSetValueExA_00575390
    MOV ESI,dword ptr [ESP + 0x8]       ; 00559e02
    PUSH ESI                            ; 00559e06
    CALL dword ptr CS:[0x575380]        ; 00559e07 | PTR_RegCloseKey_00575380
    POP ESI                             ; 00559e0e
    POP EDI                             ; 00559e0f
    ADD ESP,0x8                         ; 00559e10
    POP EBX                             ; 00559e13
    RET                                 ; 00559e14

