; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getRegistryStringValue_FUN_005f4210(char *key_path,char *value_name,char *output_buffer,uint *buffer_size)
;
; Parameters:
; char *           Stack[0x8]:4   key_path
; char *           Stack[0xc]:4   value_name
; char *           Stack[0x10]:4   output_buffer
; uint *           Stack[0x14]:4   buffer_size
;
; Referenced Globals:
;   REG_CLOSE_KEY_FUNC* g_RegCloseKeyFunc = 002119dc
;   REG_OPEN_KEY_EX_A_FUNC* g_RegOpenKeyExAFunc = 002119fc
;   REG_QUERY_VALUE_EX_A_FUNC* g_RegQueryValueExAFunc = 00211a0c
;   undefined4 DAT_80000002
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005f4210
        ;   Label: wincore_winrun.cpp_getRegistryStringValue_FUN_005f4210
    SUB ESP,0xc                         ; 005f4211
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005f4214
    MOV byte ptr [EAX],0x0              ; 005f4218
    MOV EAX,ESP                         ; 005f421b
    PUSH EAX                            ; 005f421d
    PUSH 0x1                            ; 005f421e
    PUSH 0x0                            ; 005f4220
    MOV EDX,dword ptr [ESP + 0x20]      ; 005f4222
    PUSH EDX                            ; 005f4226
    PUSH 0x80000002                     ; 005f4227 | DAT_80000002
    CALL dword ptr CS:[0x611474]        ; 005f422c | g_RegOpenKeyExAFunc
    TEST EAX,EAX                        ; 005f4233
    JZ 0x005f423c                       ; 005f4235
        ;   XREF to: 005f423c (CONDITIONAL_JUMP)  ; LAB_005f423c
    ADD ESP,0xc                         ; 005f4237
    POP EBP                             ; 005f423a
    RET                                 ; 005f423b
    PUSH EDI                            ; 005f423c
        ;   Label: LAB_005f423c
    PUSH ESI                            ; 005f423d
    PUSH EBX                            ; 005f423e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005f423f
    MOV dword ptr [ESP + 0x10],EAX      ; 005f4243
    LEA EAX,[ESP + 0x10]                ; 005f4247
    PUSH EAX                            ; 005f424b
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005f424c
    PUSH EBX                            ; 005f4250
    LEA EAX,[ESP + 0x1c]                ; 005f4251
    PUSH EAX                            ; 005f4255
    PUSH 0x0                            ; 005f4256
    MOV ESI,dword ptr [ESP + 0x34]      ; 005f4258
    PUSH ESI                            ; 005f425c
    MOV EDI,dword ptr [ESP + 0x20]      ; 005f425d
    MOV ECX,0x1                         ; 005f4261
    PUSH EDI                            ; 005f4266
    MOV dword ptr [ESP + 0x2c],ECX      ; 005f4267
    CALL dword ptr CS:[0x611478]        ; 005f426b | g_RegQueryValueExAFunc
    MOV EBP,dword ptr [ESP + 0xc]       ; 005f4272
    PUSH EBP                            ; 005f4276
    CALL dword ptr CS:[0x61146c]        ; 005f4277 | g_RegCloseKeyFunc
    POP EBX                             ; 005f427e
    POP ESI                             ; 005f427f
    POP EDI                             ; 005f4280
    ADD ESP,0xc                         ; 005f4281
    POP EBP                             ; 005f4284
    RET                                 ; 005f4285

