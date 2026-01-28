; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_winrun_cpp_setRegistryStringValue_FUN_005f4290 (char *key_path,char *value_name,char *value_data)
;
; Parameters:
; char *           Stack[0x4]:4   key_path
; char *           Stack[0x8]:4   value_name
; char *           Stack[0xc]:4   value_data
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005081e2
;
; Referenced Globals:
;   RegCloseKey* g_RegCloseKeyFunc = 002119dc
;   RegCreateKeyExA* g_RegCreateKeyExAFunc = 002119ea
;   RegSetValueExA* g_RegSetValueExAFunc = 00211a20
;   TerminatedCString s_suck_006581a2
;
; Called Functions:
;   RegCloseKey
;   RegCreateKeyExA
;   RegSetValueExA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f4290
        ;   Label: wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290
    SUB ESP,0x8                         ; 005f4291
    MOV EBX,dword ptr [ESP + 0x18]      ; 005f4294
    LEA EAX,[ESP + 0x4]                 ; 005f4298
    PUSH EAX                            ; 005f429c
    LEA EAX,[ESP + 0x4]                 ; 005f429d
    PUSH EAX                            ; 005f42a1
    PUSH 0x0                            ; 005f42a2
    PUSH 0x20006                        ; 005f42a4
    PUSH 0x0                            ; 005f42a9
    PUSH 0x6581a2                       ; 005f42ab | = "suck"
    PUSH 0x0                            ; 005f42b0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005f42b2
    PUSH EDX                            ; 005f42b6
    PUSH 0x80000002                     ; 005f42b7
    CALL dword ptr CS:[0x611470]        ; 005f42bc | g_RegCreateKeyExAFunc
    TEST EAX,EAX                        ; 005f42c3
    JZ 0x005f42cc                       ; 005f42c5
        ;   XREF to: 005f42cc (CONDITIONAL_JUMP)  ; LAB_005f42cc
    ADD ESP,0x8                         ; 005f42c7
    POP EBX                             ; 005f42ca
    RET                                 ; 005f42cb
    PUSH EDI                            ; 005f42cc
        ;   Label: LAB_005f42cc
    PUSH ESI                            ; 005f42cd
    MOV EDI,EBX                         ; 005f42ce
    SUB ECX,ECX                         ; 005f42d0
    DEC ECX                             ; 005f42d2
    XOR EAX,EAX                         ; 005f42d3
    SCASB.REPNE ES:EDI                  ; 005f42d5
    NOT ECX                             ; 005f42d7
    DEC ECX                             ; 005f42d9
    INC ECX                             ; 005f42da
    PUSH ECX                            ; 005f42db
    PUSH EBX                            ; 005f42dc
    PUSH 0x1                            ; 005f42dd
    PUSH 0x0                            ; 005f42df
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005f42e1
    PUSH ECX                            ; 005f42e5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005f42e6
    PUSH EBX                            ; 005f42ea
    CALL dword ptr CS:[0x61147c]        ; 005f42eb | g_RegSetValueExAFunc
    MOV ESI,dword ptr [ESP + 0x8]       ; 005f42f2
    PUSH ESI                            ; 005f42f6
    CALL dword ptr CS:[0x61146c]        ; 005f42f7 | g_RegCloseKeyFunc
    POP ESI                             ; 005f42fe
    POP EDI                             ; 005f42ff
    ADD ESP,0x8                         ; 005f4300
    POP EBX                             ; 005f4303
    RET                                 ; 005f4304

