; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __stdcall dll_dx7_cpp_enumAdapterCallback_FUN_100017b0(GUID *lp_guid,LPCSTR lp_driver_description,LPCSTR lp_driver_name,LPVOID lp_context,HMONITOR hmonitor)
;
; Parameters:
; GUID *           Stack[0x4]:4   lp_guid
; LPCSTR           Stack[0x8]:4   lp_driver_description
; LPCSTR           Stack[0xc]:4   lp_driver_name
; LPVOID           Stack[0x10]:4   lp_context
; HMONITOR         Stack[0x14]:4   hmonitor
;
; XREF[1]:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80 at 10001a9d
;
; Referenced Globals:
;   char[16][512] g_AdapterDriverName
;   undefined4 g_AdapterDriverName[0][4]
;   undefined4 g_AdapterDriverName[0][6]
;   undefined4 g_AdapterDriverName[0][255]
;   int g_AdapterCount = 0x0
;   GUID*[16] g_AdapterGuids
;   GUID[16] g_AdapterGuidStorage
;   undefined4 g_AdapterGuidStorage[0]+4
;   undefined4 g_AdapterGuidStorage[0]+8
;   undefined4 g_AdapterGuidStorage[0]+0xc
;   char[16][512] g_AdapterDescription
;   undefined4 g_AdapterDescription[0][4]
;   undefined4 g_AdapterDescription[0][6]
;   undefined4 g_AdapterDescription[0][255]
;
; Called Functions:
;   dll_dx7.cpp_isAdapter3DCapable_FUN_10001900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 100017b0
        ;   Label: dll_dx7.cpp_enumAdapterCallback_FUN_100017b0
    PUSH ESI                            ; 100017b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 100017b2
    PUSH EDI                            ; 100017b6
    PUSH EBP                            ; 100017b7
    PUSH EBX                            ; 100017b8
    CALL dll_dx7.cpp_isAdapter3DCapable_FUN_10001900 ; 100017b9
        ;   XREF to: 10001900 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_isAdapter3DCapable_FUN_10001900(GUID * adapter_guid)
    ADD ESP,0x4                         ; 100017be
    TEST EAX,EAX                        ; 100017c1
    JZ 0x100018e7                       ; 100017c3
        ;   XREF to: 100018e7 (CONDITIONAL_JUMP)  ; LAB_100018e7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 100017c9
    MOV ECX,0xffffffff                  ; 100017cd
    MOV EDI,ESI                         ; 100017d2
    SUB EAX,EAX                         ; 100017d4
    SCASB.REPNE ES:EDI                  ; 100017d6
    NOT ECX                             ; 100017d8
    DEC ECX                             ; 100017da
    CMP ECX,0x100                       ; 100017db
    JNC 0x10001815                      ; 100017e1
        ;   XREF to: 10001815 (CONDITIONAL_JUMP)  ; LAB_10001815
    MOV EDI,ESI                         ; 100017e3
    MOV ECX,0xffffffff                  ; 100017e5
    SUB EAX,EAX                         ; 100017ea
    SCASB.REPNE ES:EDI                  ; 100017ec
    NOT ECX                             ; 100017ee
    SUB EDI,ECX                         ; 100017f0
    MOV EBP,ECX                         ; 100017f2
    MOV EDX,dword ptr [0x1020de34]      ; 100017f4 | g_AdapterCount
    MOV EAX,EDX                         ; 100017fa
    SHL EAX,0x9                         ; 100017fc
    SHR ECX,0x2                         ; 100017ff
    MOV ESI,EDI                         ; 10001802
    LEA EDI,[EAX + 0x101398d0]          ; 10001804 | g_AdapterDriverName
    MOVSD.REP ES:EDI,ESI                ; 1000180a | g_AdapterDriverName
    MOV ECX,EBP                         ; 1000180c
    AND ECX,0x3                         ; 1000180e
    MOVSB.REP ES:EDI,ESI                ; 10001811 | g_AdapterDriverName
    JMP 0x10001837                      ; 10001813
        ;   XREF to: 10001837 (UNCONDITIONAL_JUMP)  ; LAB_10001837
    MOV EDX,dword ptr [0x1020de34]      ; 10001815 | g_AdapterCount
        ;   Label: LAB_10001815
    MOV ECX,0x3f                        ; 1000181b
    MOV EAX,EDX                         ; 10001820
    SHL EAX,0x9                         ; 10001822
    LEA EDI,[EAX + 0x101398d0]          ; 10001825 | g_AdapterDriverName
    MOVSD.REP ES:EDI,ESI                ; 1000182b | g_AdapterDriverName | g_AdapterDriverName[0][4]
    MOVSW ES:EDI,ESI                    ; 1000182d | g_AdapterDriverName[0][4]
    MOVSB ES:EDI,ESI                    ; 1000182f | g_AdapterDriverName[0][6]
    MOV byte ptr [EAX + 0x101399cf],0x0 ; 10001830 | g_AdapterDriverName[0][255]
    MOV ESI,dword ptr [ESP + 0x18]      ; 10001837
        ;   Label: LAB_10001837
    MOV ECX,0xffffffff                  ; 1000183b
    MOV EDI,ESI                         ; 10001840
    SUB EAX,EAX                         ; 10001842
    SCASB.REPNE ES:EDI                  ; 10001844
    NOT ECX                             ; 10001846
    DEC ECX                             ; 10001848
    CMP ECX,0x100                       ; 10001849
    JNC 0x1000187d                      ; 1000184f
        ;   XREF to: 1000187d (CONDITIONAL_JUMP)  ; LAB_1000187d
    MOV EDI,ESI                         ; 10001851
    MOV ECX,0xffffffff                  ; 10001853
    SUB EAX,EAX                         ; 10001858
    SCASB.REPNE ES:EDI                  ; 1000185a
    NOT ECX                             ; 1000185c
    SUB EDI,ECX                         ; 1000185e
    MOV EBP,ECX                         ; 10001860
    MOV EAX,EDX                         ; 10001862
    SHL EAX,0x9                         ; 10001864
    SHR ECX,0x2                         ; 10001867
    MOV ESI,EDI                         ; 1000186a
    LEA EDI,[EAX + 0x10236910]          ; 1000186c | g_AdapterDescription
    MOVSD.REP ES:EDI,ESI                ; 10001872 | g_AdapterDescription
    MOV ECX,EBP                         ; 10001874
    AND ECX,0x3                         ; 10001876
    MOVSB.REP ES:EDI,ESI                ; 10001879 | g_AdapterDescription
    JMP 0x10001899                      ; 1000187b
        ;   XREF to: 10001899 (UNCONDITIONAL_JUMP)  ; LAB_10001899
    MOV EAX,EDX                         ; 1000187d
        ;   Label: LAB_1000187d
    MOV ECX,0x3f                        ; 1000187f
    SHL EAX,0x9                         ; 10001884
    LEA EDI,[EAX + 0x10236910]          ; 10001887 | g_AdapterDescription
    MOVSD.REP ES:EDI,ESI                ; 1000188d | g_AdapterDescription | g_AdapterDescription[0][4]
    MOVSW ES:EDI,ESI                    ; 1000188f | g_AdapterDescription[0][4]
    MOVSB ES:EDI,ESI                    ; 10001891 | g_AdapterDescription[0][6]
    MOV byte ptr [EAX + 0x10236a0f],0x0 ; 10001892 | g_AdapterDescription[0][255]
    TEST EBX,EBX                        ; 10001899
        ;   Label: LAB_10001899
    JNZ 0x100018aa                      ; 1000189b
        ;   XREF to: 100018aa (CONDITIONAL_JUMP)  ; LAB_100018aa
    MOV dword ptr [EDX*0x4 + 0x10226870],0x0 ; 1000189d | g_AdapterGuids
    JMP 0x100018d2                      ; 100018a8
        ;   XREF to: 100018d2 (UNCONDITIONAL_JUMP)  ; LAB_100018d2
    MOV EAX,EDX                         ; 100018aa
        ;   Label: LAB_100018aa
    SHL EAX,0x4                         ; 100018ac
    LEA ECX,[EAX + 0x10226948]          ; 100018af | g_AdapterGuidStorage
    MOV EAX,dword ptr [EBX]             ; 100018b5
    MOV dword ptr [ECX],EAX             ; 100018b7 | g_AdapterGuidStorage
    MOV dword ptr [EDX*0x4 + 0x10226870],ECX ; 100018b9 | g_AdapterGuids
    MOV EBP,dword ptr [EBX + 0x4]       ; 100018c0
    MOV dword ptr [ECX + 0x4],EBP       ; 100018c3 | g_AdapterGuidStorage[0]+4
    MOV EAX,dword ptr [EBX + 0x8]       ; 100018c6
    MOV dword ptr [ECX + 0x8],EAX       ; 100018c9 | g_AdapterGuidStorage[0]+8
    MOV EBX,dword ptr [EBX + 0xc]       ; 100018cc
    MOV dword ptr [ECX + 0xc],EBX       ; 100018cf | g_AdapterGuidStorage[0]+0xc
    INC EDX                             ; 100018d2
        ;   Label: LAB_100018d2
    MOV dword ptr [0x1020de34],EDX      ; 100018d3 | g_AdapterCount
    CMP EDX,0x10                        ; 100018d9
    JL 0x100018e7                       ; 100018dc
        ;   XREF to: 100018e7 (CONDITIONAL_JUMP)  ; LAB_100018e7
    XOR EAX,EAX                         ; 100018de
    POP EBP                             ; 100018e0
    POP EDI                             ; 100018e1
    POP ESI                             ; 100018e2
    POP EBX                             ; 100018e3
    RET 0x14                            ; 100018e4
    MOV EAX,0x1                         ; 100018e7
        ;   Label: LAB_100018e7
    POP EBP                             ; 100018ec
    POP EDI                             ; 100018ed
    POP ESI                             ; 100018ee
    POP EBX                             ; 100018ef
    RET 0x14                            ; 100018f0

