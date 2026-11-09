; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_005151f0(CPod *this_ptr,int index)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[2]:
;   engine_pod.cpp_CPod_dismount_FUN_00514560 at 005145df
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_00514d00 at 00514d77
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005cc9cc
;   TerminatedCString s_CPod_dismountPod_invalid_005cc9de
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a30c4
;   engine_pod.cpp_CPodFile_dtor_FUN_00512f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005151f0
        ;   Label: engine_pod.cpp_CPod_dismountPod_FUN_005151f0
    PUSH ESI                            ; 005151f1
    PUSH EBP                            ; 005151f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005151f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005151f7
    TEST ESI,ESI                        ; 005151fb
    JL 0x00515203                       ; 005151fd
        ;   XREF to: 00515203 (CONDITIONAL_JUMP)  ; LAB_00515203
    CMP ESI,dword ptr [EBX]             ; 005151ff
    JL 0x00515228                       ; 00515201
        ;   XREF to: 00515228 (CONDITIONAL_JUMP)  ; LAB_00515228
    PUSH EDI                            ; 00515203
        ;   Label: LAB_00515203
    MOV ECX,0x5cc9cc                    ; 00515204 | = "..\\engine\\pod.cpp"
    MOV EDI,0x6be                       ; 00515209
    PUSH 0x5cc9de                       ; 0051520e | = "CPod::dismountPod - invalid index"
    MOV dword ptr [0x01d71de0],ECX      ; 00515213 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00515219 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0051521f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00515224
    POP EDI                             ; 00515227
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x4] ; 00515228
        ;   Label: LAB_00515228
    TEST EAX,EAX                        ; 0051522c
    JZ 0x00515244                       ; 0051522e
        ;   XREF to: 00515244 (CONDITIONAL_JUMP)  ; LAB_00515244
    PUSH 0x0                            ; 00515230
    PUSH EAX                            ; 00515232
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00512f70 ; 00515233
        ;   XREF to: 00512f70 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00512f70(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00515238
    PUSH EAX                            ; 0051523b
    CALL crt_unknown.c_FUN_005a30c4     ; 0051523c
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00515241
    MOV EBP,dword ptr [EBX]             ; 00515244
        ;   Label: LAB_00515244
    DEC EBP                             ; 00515246
    MOV EDX,ESI                         ; 00515247
    MOV dword ptr [EBX],EBP             ; 00515249
    CMP ESI,EBP                         ; 0051524b
    JGE 0x00515270                      ; 0051524d
        ;   XREF to: 00515270 (CONDITIONAL_JUMP)  ; LAB_00515270
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051524f
    ADD EAX,EBX                         ; 00515256
    MOV ECX,dword ptr [EAX + 0x8]       ; 00515258
        ;   Label: LAB_00515258
    MOV dword ptr [EAX + 0x4],ECX       ; 0051525b
    INC EDX                             ; 0051525e
    MOV ECX,dword ptr [EBX]             ; 0051525f
    ADD EAX,0x4                         ; 00515261
    CMP EDX,ECX                         ; 00515264
    JL 0x00515258                       ; 00515266
        ;   XREF to: 00515258 (CONDITIONAL_JUMP)  ; LAB_00515258
    LEA EAX,[EAX]                       ; 00515268
    MOV EDX,EDX                         ; 0051526e
    MOV EAX,dword ptr [EBX]             ; 00515270
        ;   Label: LAB_00515270
    MOV dword ptr [EBX + EAX*0x4 + 0x4],0x0 ; 00515272
    POP EBP                             ; 0051527a
    POP ESI                             ; 0051527b
    POP EBX                             ; 0051527c
    RET                                 ; 0051527d

